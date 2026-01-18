#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        int m = (n*(n-1))/2;
        vector<int>b(m);
        for(int i = 0 ; i < m ; i++) cin >> b[i];
        sort(b.begin(),b.end());
        int x = n-1;int i = 0;
        while(x>0){
            cout<<b[i]<<" ";
            i += x ;
            x--;
        }
        cout<<"1000000000 \n";
    }
    return 0;
}