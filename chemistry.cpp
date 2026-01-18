#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        int oddCount = 0;
        for(int i = 0 ; i < a ; i++){
            mp[s[i]]++;
        }
        for(auto &i  : mp){
            if(i.second % 2 == 1) oddCount++;
        }
        if(oddCount <= b || oddCount == b+1) cout<< "YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}