#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, p;
        cin >> n >> p;
        vector<pair<long long, long long>> v(n);
        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        for (int i = 0; i < n; i++)
            v[i] = {b[i], a[i]};

        sort(v.begin(), v.end());

        long long minSh = p;
        long long alrSh = 1;
        for(auto i : v){
            long long cost = i.first;
            long long share = i.second;
            if(cost>=p) break;
            if(alrSh + share > n){
                minSh += (n-alrSh)*cost;
                alrSh = n;
                break;
            }else{
                minSh += share*cost;
                alrSh += share;
            }
        }
        minSh += (n-alrSh)*p;
        cout<<minSh<<endl;
        
    }
    return 0;
}