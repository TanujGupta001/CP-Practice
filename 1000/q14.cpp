
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tst;
    cin >> tst;
 
    while(tst--){
        int n;
        cin >> n;
 
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
 
        unordered_map<int,int> mp;
        for(int x : a) mp[x]++;
 
        bool flag = true;
 
        for(auto x : mp){
            if(x.second == 1){
                flag = false;
                break;
            }
        }
 
        if(!flag){
            cout << -1 << endl;
            continue;
        }
 
        vector<int> s(n);
        for(int i = 0 ; i < n ; i++) s[i] = i+1;
 
        int i = 0, j = 1;
 
        while(j < n){
            if(a[j] == a[i]){
                j++;
            }
            else{
               reverse(s.begin() + i, s.begin() + j);
                reverse(s.begin() + i + 1, s.begin() + j);
                i = j;
                j++;
            }
        }
 
       reverse(s.begin() + i, s.begin() + j);
                reverse(s.begin() + i + 1, s.begin() + j);
 
        for(int x : s) cout << x << " ";
        cout << endl;
    }
 
    return 0;
}
