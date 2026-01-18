#include<bits/stdc++.h>
#include<iostream>
using namespace std;
 

int main(){
    int tst;
    cin>>tst;
    while(tst--){
        long long  n , x;
        cin>>n>>x;
        vector<long long >points_arr;
        points_arr.push_back(0);
        for(int i = 0; i<n ;i++){
            long long point;
            cin>>point;
            points_arr.push_back(point);
        }
       points_arr.push_back(x);
       long long ans = INT_MIN;
       for(int i = 1 ; i < points_arr.size();i++){
        if(i == points_arr.size()-1) ans = max(ans , 2*(points_arr[i]-points_arr[i-1]));
        else ans = max(ans,(points_arr[i]-points_arr[i-1]));
       }
       cout<<ans<<endl;
    }
    return 0;
}