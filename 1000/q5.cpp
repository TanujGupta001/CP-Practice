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
        int k;
        cin>>k;
        vector<int>a(n);
        for(int i = 0 ;i  < n ; i++ ) cin >> a[i] ;
        vector<pair<int,int>> arr;
        for(int i = 0 ; i < n ; i++) arr.push_back({a[i],i+1});
        for(int i = 0 ; i < n ; i++){
            if(arr[i].first % k == 0) arr[i].first = k;
            else arr[i].first = arr[i].first % k ;
        }
        sort(arr.begin(),arr.end());
        for(int i = 0 ; i < n ; i++) cout<<arr[i].second<<" ";
        cout << endl;

    }
    return 0;
}