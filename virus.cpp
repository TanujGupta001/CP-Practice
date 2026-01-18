#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>arr(m);
        for(int i = 0 ; i<m ;i++) cin>>arr[i];
        sort(arr.begin(), arr.end());
        vector<int>gap;
        for(int i = 0 ; i < m-1 ; i++){
            gap.push_back(arr[i+1]-arr[i]-1);
        }
      gap.push_back(arr[0] + n - arr[m-1] - 1);
        sort(gap.rbegin(),gap.rend());
        int time = 0;
        int ans = 0;
        for(int &g:gap){
            int curr = g - time*2;
            if(curr>0) ans++;
            curr -= 2;
            if(curr>0) ans+= curr;
            time += 2;
        }
        cout<<n-ans<<endl;
    }
    return 0;
}