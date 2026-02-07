//q20
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n ; cin >> n;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin >> arr[i];
//         for(int i = 0 ; i < n ; i++) cout << n+1-arr[i] << " ";
//         cout <<endl;
//     }
//     return 0;
// }

//q21
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n ; cin >> n;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin >> arr[i];
//         long long count_of_zeroes = 0; 
//         long long maximum_length = 0; 
//         for (int i = 0; i < n; i++) 
//         {
//             if (arr[i] == 0)
//                 count_of_zeroes++; 
//             else
//                 count_of_zeroes = 0; 
            
//             maximum_length = max(maximum_length, count_of_zeroes);
//         }
//         cout << maximum_length << endl; 
       
//     }
//     return 0;
// }

//q22
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         long long  n,k;
//         cin >> n >> k;
//         if(n % 2 == 0 || n == k) cout << "Yes" << endl;
//         else{
//            if(n % 2 == 1 && k % 2 == 1) cout << " Yes" << endl;
//            else cout << "No" << endl;
//         }
//     }
//     return 0;
// }

//q23
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int a,b,c,d;
//         cin >>a>>b>>c>>d;
//         if(a == c && b == d) cout << "0" << endl;
//         else{
//             int opt = 0;
//             while(b < d){
//                 b++ ; a++; opt++;
//             }
//             if(a-c < 0|| b > d) cout << "-1" << endl;
//             else cout << opt+(a-c) << endl;
//         }
//     }
//     return 0;
// }

//q24
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n ;
//         cin >> n;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin >> a[i] ;
//         int ans = 0;
//         for(int i = 0 ; i < n ; i++) ans ^= a[i];
//         if(ans > 0 && n%2 == 0) cout << "-1" << endl;
//          else cout<<ans<<endl;
//     }
//     return 0;
// }

//q25
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n ;
//         string s;
//         cin>>n;
//         cin>>s;
//         int i = 0 , j = n-1;
//          while (i < j) {
//             if ((s[i] == '0' && s[j] == '1') ||
//                 (s[i] == '1' && s[j] == '0')) {
//                 i++;
//                 j--;
//             } else {
//                 break;
//             }
//         }
//     cout<<j-i+1 << endl;
// }
//     return 0;
// }

//q26
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i] ;
        
        int gcd_num = a[0];bool isValid = true;
        for(int i = 1 ; i < n ; i++){
            gcd_num = gcd(gcd_num,a[i]);
        }
        if(gcd_num < n) cout<< "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}