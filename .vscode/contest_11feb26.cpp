// #include<bits/stdc++.h>
// using namespace std;

// int solve(long long n){
//     int s = 0;
//     while(n){
//         s += n % 10;
//         n /= 10;
//     }
//     return s;
// }

// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int tst;
//     cin >> tst;
//     while(tst--){
//         long long x;
//         cin >> x;

//         int cnt = 0;
//         for(int s = 1; s <= 90; s++){
//             long long i = x + s;
//             if(solve(i) == s)
//                 cnt++;
//         }

//         cout << cnt << "\n";
//     }
// }

