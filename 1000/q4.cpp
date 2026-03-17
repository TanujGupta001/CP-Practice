#include <bits/stdc++.h>
using namespace std;

int main() {

    long long t;
    cin >> t;

    while(t--) {

        long long n;
        cin >> n;

        vector<long long> secondMin;
        long long minFirst = LLONG_MAX;

        for(int i = 0; i < n; i++) {

            long long m;
            cin >> m;

            vector<long long> arr(m);

            for(auto &x : arr)
                cin >> x;

            sort(arr.begin(), arr.end());

            secondMin.push_back(arr[1]);

            minFirst = min(minFirst, arr[0]);
        }

        sort(secondMin.begin(), secondMin.end());

        long long sumSecond = accumulate(secondMin.begin(), secondMin.end(), 0LL);

        long long smallestSecond = secondMin[0];

        long long ans = minFirst + sumSecond - smallestSecond;

        cout << ans << endl;
    }

    return 0;
}