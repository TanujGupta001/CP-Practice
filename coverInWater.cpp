#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        string s;
        cin>>n>>s;
        bool Is_a_triplet = false;
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '.' && i+1 < n && s[i+1] == '.'  && i+2<n && s[i+2] == '.') {Is_a_triplet = true;
                break;}
            if(s[i] == '.') ans++;
        }
        if(Is_a_triplet) cout<<2<<endl;
        else cout << ans << endl;
    }
    return 0;
}