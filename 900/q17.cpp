#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n ;
        cin >> n ;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        unordered_map<long long,long long >mp;
               long long ans = 1;
        for(int i = 0 ; i < n ; i++){ mp[a[i]]++; ans = max(ans,mp[a[i]]);}
        if(ans == n) cout << 0 << endl;
        else{
            long long cnt = 0;
            long long sizeArr = n-ans;
            while(ans <= sizeArr){
                cnt += ans + 1;
                sizeArr -= ans;
                ans = ans*2;
            }
            if(sizeArr == 0) cout << cnt << endl;
            else cout << cnt + sizeArr + 1 << endl;
        }
    }
    return 0;
}