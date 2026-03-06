// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n , k;
//         cin >> n >> k;
//         int remove_fence = n / k;

//          cout << n - remove_fence << endl;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         long long x, y;
//         cin >> n >> x >> y;

//         vector<long long> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         long long total = 0;
//         vector<long long> res(n);

//         for (int i = 0; i < n; i++) {
//             res[i] = (a[i] / x) * y;
//             total += res[i];
//         }

//         long long ans = 0;
//         for (int i = 0; i < n; i++) {
//             long long curr = a[i] + (total - res[i]);
//             ans = max(ans, curr);
//         }

//         cout << ans << "\n";
//     }

//     return 0;
// }


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n , k;
        vector<string>s(k);
        cin >> n >> k;
        for(int i = 0 ; i < k ; i++) cin >> s[i];
        
    }
    return 0;
}