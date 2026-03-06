#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        string s , t;
        cin>>s>>t;
        if(s == t) cout <<"Yes" <<endl;
        else{
            map<char,int>mp; bool isValid = true;
            int j = t.size()-1;
            for(int i = s.size() -1 ; i >= 0 && j >= 0 ;i--){
                if(s[i] == t[j] && (mp.find(s[i]) == mp.end())) j--;
                else if(s[i] == t[j] && mp.find(s[i]) != mp.end()) {
                    isValid = false;
                    break;
                }
                else if(s[i]!=t[j])mp[s[i]]++;
            }
            if(isValid&&j<0) cout <<"Yes" << endl;
            else cout <<"No" <<endl;
        }
    }
    return 0;
}