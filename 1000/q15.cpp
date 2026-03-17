#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n, k;
        cin >> n >> k;
        string s ;
        cin >> s;
        int j = 0;
        int black = 0 , white = 0;
        for(int i = 0 ; i < k ; i++){
            if(s[i] == 'B') black++;
            else white++;
        }
        int ans = white;
        for(int i = k ; i < n ; i++){
             if(s[i] == 'B') black++;
            else white++;
             if(s[j] == 'B') black--;
            else white--;
            ans = min(ans,white);
        }
        cout << ans << endl;
    }
    return 0;
}