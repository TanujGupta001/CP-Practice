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

        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        vector<pair<long long,long long>> mp;
        for(int i=0;i<n;i++)
            mp.push_back({a[i], i});

        sort(mp.rbegin(), mp.rend());

        long long k = 1;
        vector<long long> ans(n+1); // FIX
        long long total = 0;

        ans[0] = 0;

        for(int i=0;i<n;i++){
            total += 2LL * mp[i].first * abs(k);
            ans[mp[i].second + 1] = k;

            if(k > 0) k = -k;
            else k = abs(k) + 1;
        }

        cout << total << "\n";
        for(long long x : ans)
            cout << x << " ";
        cout << "\n";
    }
}