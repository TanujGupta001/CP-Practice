#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++) cin >> arr[i];
        if(n == 1) cout << arr[0] <<endl;
        else{
             sort(arr.rbegin(),arr.rend());
       for(int i = 0 ; i < n ; i++) cout << arr[i] << " ";
       cout << endl;
        }
       
    }
    return 0;
}