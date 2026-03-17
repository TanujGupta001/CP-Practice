// #include<bits/stdc++.h>
// using namespace std;

// int lcm(int a,int b){
//     return ((a*b)/(__gcd(a,b)));
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n;
//         cin>>n;
//         vector<int>rest(2,0);
//         int ans = lcm(1,n-1);
//         rest[0] = 1 ;
//         rest[1] = n-1;int res = 0;
//         for(int i = 2 ; i <= n/2 ; i++ ){
//             int num = n-i;
//             if(num == 0) break;
//             res = lcm(i,num);
//             if(res < ans){
//                 ans = res;
//                 rest[0] = i;
//                 rest[1] = num;
//             }
//         }
//         cout << rest[0] << " " << rest[1];
//         cout << endl;
        
//     }
//     return 0;
// }
//tle 

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        long long n;
        cin >> n;
 
        long long d = n;
 
        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                d = i;
                break;
            }
        }
 
        long long f = n / d;
        long long s = n - f;
 
        cout << f << " " << s << "\n";
    }
}