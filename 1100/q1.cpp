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
        string s ;
        cin >> s;
        unordered_set<char>st;
        long long ans = 0;
        for(int i = 0 ; i < n ; i++) {
            st.insert(s[i]);
            ans += st.size();
        }
        cout << ans << endl;
    }
    return 0;
}