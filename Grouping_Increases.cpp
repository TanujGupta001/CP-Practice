#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int a = INT_MAX, b = INT_MAX;
        int ans = 0;

        for (int x : arr) {
            if (x <= a || x <= b) {

                if (a > b) {
                    if (x <= a) a = x;
                    else b = x;
                } else {
                    if (x <= b) b = x;
                    else a = x;
                }
            } else {
                ans++;
                if (a > b) a = x;
                else b = x;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
