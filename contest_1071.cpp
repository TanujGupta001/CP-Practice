// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int x , n;
//         cin >> n >> x;
//         cout<<(n*x)+1<<endl;
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
//         cin >> n;
//         vector<int> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         long long total = 0;
//         for (int i = 0; i < n - 1; i++) {
//             total += abs(a[i] - a[i + 1]);
//         }

//         long long ans = total;

//         ans = min(ans, total - abs(a[0] - a[1]));

//         ans = min(ans, total - abs(a[n - 2] - a[n - 1]));

//         for (int k = 1; k <= n - 2; k++) {
//             long long cur = total;
//             cur -= abs(a[k] - a[k - 1]);
//             cur -= abs(a[k] - a[k + 1]);
//             cur += abs(a[k - 1] - a[k + 1]);
//             ans = min(ans, cur);
//         }

//         cout << ans << "\n";
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n;
//         cin>>n;
//         vector<long long>arr(n);
//         for(long long i = 0 ; i < n ; i++) cin >> arr[i];
//         long long mini = *max_element(arr.begin(),arr.end());
//         long long maxi =  INT_MIN;
        
//         for(long long i = 1 ; i <= mini ; i++){
//             unordered_set<long long>st;
//             for(long long j = 0 ; j < n ; j++){
//                 long long modi = arr[j] % i;
//                 if(st.count(modi)) break;
//                 else st.insert(modi);
//                 maxi = max(maxi,i);
//             }
            
//         }
//         cout<<maxi<<endl;

//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// #include <algorithm> 
// using namespace std;
// long long gcd(long long a, long long b) {
//     while (b != 0) {
//         long long r = a % b;
//         a = b;
//         b = r;
//     }
//     return a;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int tst;
//     cin >> tst;

//     while (tst--) {
//         int n;
//         cin >> n;
//         vector<long long> arr(n);
//         for (int i = 0; i < n; i++) cin >> arr[i];

//         long long g = 0;
//         for (int i = 1; i < n; i++) {
//             g = gcd(g, llabs(arr[i] - arr[0]));
//         }

//         if (g == 0) {
//             cout << arr[0] + 1 << "\n";
//         } else {
//             cout << g << "\n";
//         }
//     }

//     return 0;
// }
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

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long ans = LLONG_MAX;
        for (int i = 1; i < n; i++) {
            ans = min(ans, a[i] - a[i - 1]);
        }

        cout << ans << "\n";
    }

    return 0;
}
