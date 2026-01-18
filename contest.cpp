// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//  int tst;
//     cin >> tst;

//     while (tst--) {
//         int l, a, b;
//         cin >> l >> a >> b;

//         int maxi = a;
//         int pos = a;

//         do {
//             maxi = max(maxi, pos);
//             pos = (pos + b) % l;
//         } while (pos != a);

//         cout << maxi << "\n";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;

//         vector<string> a(n);
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//         }

//         string s = "";
//         for (int i = 0; i < n; i++) {
//             string ft = a[i] + s;
//             string bk  = s + a[i];

//             if (ft < bk)
//                 s = ft;
//             else
//                 s = bk;
//         }

//         cout << s << "\n";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k ;
        cin >> n >> k;
        vector<long long>a(k);
        if(k%2 == 1){
            for(int i = 0 ; i < k ; i++) a[i] = n;
        }else{
            a[0] = 0;
             for(int i = 1 ; i < k ; i++) a[i] = n;
        }
        for(int i = 0 ; i < k ; i++){
            cout<< a[i]<<" ";
        }
        cout << endl;
    }
    return 0;
}
