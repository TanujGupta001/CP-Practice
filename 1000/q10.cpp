#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin >> n ;
        char s;
        cin >> s;
        string str;
        cin >> str;
        string t = str + str;
        int ans = 0;
        int res = 0;
        for(int i  = 0 ; i < n; i++){
            if(t[i] == s){
                int j = i;
                if(i < res) ans = max(ans,res-i);
                else{
                    while(j < t.size() && t[j] != 'g') j++;
                    
                        res  = j;
                        ans = max(ans , res-i);
                    
                }
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}

