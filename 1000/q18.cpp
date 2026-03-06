#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;

        long long area = 0;

        for (int i = 0; i < 4; i++)
        {
            long long k;
            cin >> k;

            long long mn = LLONG_MAX;
            long long mx = LLONG_MIN;

            for (int j = 0; j < k; j++)
            {
                long long x;
                cin >> x;
                mn = min(mn, x);
                mx = max(mx, x);
            }

            long long base = mx - mn;
            long long height = (i < 2 ? h : w);

            area = max(area, base * height);
        }

        cout << area << "\n";
    }
}
