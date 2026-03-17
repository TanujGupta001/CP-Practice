#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;

    while(tst--){
        unsigned long long n, k, b, s;
        cin >> n >> k >> b >> s;

        if(s < k*b || s > k*b + n*(k-1)){
            cout << -1 << "\n";
            continue;
        }

        vector<unsigned long long> ans(n,0);

        ans[0] = k*b;
        unsigned long long rem = s - k*b;

        for(unsigned long long i = 0; i < n && rem > 0; i++){
            unsigned long long add = min(rem, k-1);
            ans[i] += add;
            rem -= add;
        }

        for(unsigned long long i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}