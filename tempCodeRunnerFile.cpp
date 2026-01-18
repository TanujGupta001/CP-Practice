#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(long long i = 0 ; i < n ; i++) cin >> arr[i];
        long long mini = *max_element(arr.begin(),arr.end());
        long long maxi =  INT_MIN;
        
        for(long long i = 1 ; i <= mini ; i++){
            unordered_set<long long>st;
            for(long long j = 0 ; j < n ; j++){
                long long modi = arr[j] % i;
                if(st.count(modi)) break;
                else st.insert(modi);
                maxi = max(maxi,i);
            }
            
        }
        cout<<maxi<<endl;

    }
    return 0;
}