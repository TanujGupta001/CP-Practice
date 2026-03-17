#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;

    while(tst--){
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long ans = 0;
        int len = 0;

        for(int i = 0; i < n; i++){
            if(a[i] <= q){
                len++;
            }
            else{
                if(len >= k)
                    ans += 1LL * (len - k + 1) * (len - k + 2) / 2;
                len = 0;
            }
        }

        if(len >= k)
            ans += 1LL * (len - k + 1) * (len - k + 2) / 2;

        cout << ans << "\n";
    }

    return 0;
}