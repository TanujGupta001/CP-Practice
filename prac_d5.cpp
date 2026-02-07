// // #include <bits/stdc++.h>
// // using namespace std;

// // int main() {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);

// //     int tst;
// //     cin >> tst;

// //     while (tst--) {
// //         int a, b;
// //         cin >> a >> b;

// //         int x1, y1;
// //         cin >> x1 >> y1;

// //         int x2, y2;
// //         cin >> x2 >> y2;

// //         vector<vector<int>> dir = {
// //             {1, -1}, {1, 1}, {-1, 1}, {-1, -1}
// //         };
// //         set<pair<int,int>> mp;
// //         for (int i = 0; i < 4; i++) {
// //             int nr = dir[i][0], nc = dir[i][1];

// //             mp.insert({x1 + a * nr, y1 + b * nc});
// //             mp.insert({x1 + b * nr, y1 + a * nc});
// //         }

// //         int cnt = 0;
// //         for (int i = 0; i < 4; i++) {
// //             int nr = dir[i][0], nc = dir[i][1];
// //             if (mp.count({x2 + a * nr, y2 + b * nc})){ mp.erase({x2 + a * nr, y2 + b * nc});cnt++;}
// //             if (mp.count({x2 + b * nr, y2 + a * nc})){  mp.erase({x2 + a * nr, y2 + b * nc});cnt++;}
// //         }

// //         cout << cnt << "\n";
// //     }
// //     return 0;
// // }

// // //q2
// // #include<bits/stdc++.h>
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int tst;
// //     cin>>tst;
// //     while(tst--){
// //         int n,k;
// //         cin >> n >> k;
// //         string s;
// //         cin >> s;
// //         unordered_map<char,int>mp;
// //         for(int i  = 0  ; i < s.size() ; i++) mp[s[i]]++;
// //         int cnt = 0;
// //         for(auto i : mp){
// //             if(i.second % 2 == 1) cnt++;
// //         }
// //         if(cnt <= k+1) cout << "Yes" << endl;
// //         else cout<<"No" <<endl;
// //     }
// //     return 0;
// // }

// // #include <bits/stdc++.h>
// // #include <iostream>
// // using namespace std;

// // int main()
// // {
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int tst;
// //     cin >> tst;
// //     while (tst--)
// //     {
// //         long long  n, k, x;
// //         cin >> n >> k >> x;
// //         long long mini = (k * (k + 1)) / 2;
// //         long long maxi =(n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
// //          if (x >= mini && x <= maxi) cout << "Yes" << endl;
// //         else cout << "No" << endl;
// //     }
// //     return 0;
// // }

// //q4
// // #include<bits/stdc++.h>
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     int tst;
// //     cin>>tst;
// //     while(tst--){
// //         int n , c , k ;
// //         cin >> n >> c >> k;
// //         vector<int>a(k);
// //         for(int i = 0 ; i < k ; i++) cin >> a[i];
// //         int sum = c ;long long  ans = c;
// //         for(int i = 0 ; i < k ; i++){
// //             sum += a[i];
// //             if(sum <= n ) ans += a[i];
// //             else {
// //                 sum = min(a[i],n);
                
// //                  if(sum  == n) ans += sum-1;
// //                 else if (sum  < n) ans += sum ;
// //             }
            
// //         }
// //         cout << ans <<endl;
// //     }
// //     return 0;
// // }

// //q5
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         long long  n;
//         cin >> n;
//         if(n % 2 ==1) cout << 1 << endl;
//         else{
//             int count = 0 , ans=1;
//             for(int i = 1 ; i < 100 ; i++){
//                 if(n % i == 0) count++;
//                 else count = 0;
//                 ans= max(ans,count);

//         } cout << ans << endl ; }
//     }
//     return 0;
// }

// //Q6
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n , k ;
//         cin >> n >> k;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin >>a[i];
//         sort(a.begin(),a.end());
//         int cnt = 1 , ans = 1;
//         for(int i = 1 ; i < n ; i++){
//             if(a[i] - a[i-1] <= k) cnt++;
//             else cnt =  1 ;
//             ans = max(ans,cnt);
//         }
//         cout <<n-ans <<endl;
//     }
//     return 0;
// }

//q7
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n;
//         string s;
//         cin >> n;
//         cin >> s;
//         long long longest = 1;
//         long long ans = 1 ;
//         for(int i = 0 ; i < s.size() ; i++){
//             if(s[i] == s[i-1] ) longest++;
//             else longest = 1;
//             ans = max(ans,longest);
//         }
//         cout << ans + 1 << endl;
//     }
//     return 0;
// }

