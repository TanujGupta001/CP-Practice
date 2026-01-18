#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        long long n;
        cin>>n;
        vector<long long>arr(n);
        for(int  i = 0 ; i < n ; i++ ) cin >> arr[i];

        map<long long , long long>mp;
        for(int i = 0 ; i < n ; i++) mp[arr[i]]++;
        if (mp.size() >= 3) 
        {
            cout << "No" << endl; 
        }
        else
        {
           
            long long freq_1 = mp.begin()->second;
            long long freq_2 = mp.rbegin()->second;
            
           
            if (freq_1 == freq_2) 
                cout << "Yes" << endl; 
            else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1) 
                cout << "Yes" << endl; 
            else
                cout << "No" << endl; 
        }
    }
    return 0;
}
