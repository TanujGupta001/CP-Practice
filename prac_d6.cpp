// // #include<bits/stdc++.h>
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int tst;
// //     cin>>tst;
// //     while(tst--){
// //         int n;
// //         cin >> n;
// //         int a, b ;
// //         cin >> a>>b;
// //         int num = n/2;
// //         if(n == a && a == b) cout << "Yes" << endl;
// //         else{
// //             if(a + b < n-1) cout << "Yes" << endl;
// //             else cout << "No" << endl;
// //         }
// //     }
// //     return 0;
// // }

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
//         for(int i = 0 ; i < n ; i++) cin >> a[i];
//         vector<int>ans;
//         if(a.size()==1) cout<<0<<endl;
//         else{
//             ans.push_back(a[0]);
//             int cnt = 0;
//             for(int i = 1 ; i < a.size() ; i++){
//                 if(ans.back() % 2 == 0 && a[i] % 2 == 0){
//                     cnt++;
//                     int num = ans.back();
//                     ans.pop_back();
//                     ans.push_back(a[i] * num);
//                 }
//                 else if(ans.back() % 2 == 1 && a[i] % 2 == 1){
//                     cnt++;
//                     int num = ans.back();
//                     ans.pop_back();
//                     ans.push_back(a[i] * num);
//                 }
//                 ans.push_back(a[i]);
//             }
//             cout << cnt<<endl;
//         }
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n ;  cin >> n;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin >> a[i];

//             int sum = 0;
//             int st = 0 , end = n-1;
//             int i = 0 ;
//             bool isValid = true;
//             while(i<n){
//                 if(sum == a[i]) {
//                     isValid = false;
//                     break;
//                 }
//                   sum += a[i];
//                   i++;
//             }
//             if(isValid )
//             {cout << "Yes" <<endl;
//             for(int i = 0 ; i < n ; i++) cout << a[i] << " " ;
//             cout<<endl;}
//             else{
//                 sort(a.begin() , a.end());
//                 int i = 0 , j= n-1;
//                 if(a[i] == a[j]) cout<<"NO" << endl;
//                 else {
//                     while(i <= j){
//                     if( i == j) {cout << a[i] << " ";break;}
//                     else{
//                         cout << a[j] << " ";
//                         cout << a[i] << " ";
//                         i++;
//                         j--;
//                     }
//                 }
           
//             cout<<endl;}
//             }
//     }
//     return 0;
// }

