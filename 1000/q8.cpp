#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        string s;
        cin >> s;

        unordered_set<char> st;
        vector<long long> pref(n + 1), suff(n + 1);

        for (long long i = 1; i <= n; i++) {
            st.insert(s[i - 1]);
            pref[i] = st.size();
        }

        st.clear();

        for (long long i = n; i >= 1; i--) {
            st.insert(s[i - 1]);
            suff[i] = st.size();
        }

        long long ans = 0;

        for (long long i = 0; i < n; i++)
            ans = max(ans, pref[i] + suff[i + 1]);

        cout << ans << "\n";
    }

    return 0;
}