//q1
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// bool isSorted(vector<int>&arr){
//             for(int i = 1 ; i < arr.size() ; i++) {
//                 if(arr[i] < arr[i-1]) {
//                     return true;
//                     break;
//                 }
//             }
//                 return false;
// }
// int main(){
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n,k;
//         cin>>n>>k;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin >> arr[i];
//         if(k==1 && isSorted(arr)){
//             cout<<"no"<<endl;
//             }
//             else cout << "yes"<<endl;
//     }
//     return 0;
// }


//q2
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n,x;
//         cin>>n>>x;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin>>a[i];
//         int ans = a[0];
//         if(a.size() > 1){
//         for(int i = 1 ; i < n ; i++) ans = max(ans,a[i]-a[i-1]);
//         cout<<max(ans,2*(x-a[n-1]))<<endl;
//         }
//         else cout<<max(ans,2*(x-a[n-1]))<<endl;
//     }
//     return 0;
// }


//q3
// #include<vector>
// #include<algorithm>
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
//         cin>>n>>s;
//         bool Is_a_triplet = false;
//         int ans = 0;
//         for(int i = 0 ; i < n ; i++){
//             if(s[i] == '.' && i+1 < n && s[i+1] == '.'  && i+2<n && s[i+2] == '.') {Is_a_triplet = true;
//                 break;}
//             if(s[i] == '.') ans++;
//         }
//         if(Is_a_triplet) cout<<2<<endl;
//         else cout << ans << endl;
//     }
//     return 0;
// }

//q4
// #include<vector>
// #include<algorithm>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n;
//         cin>>n;
//         if(n%3 == 0 ) cout <<"second"<<endl;
//         else cout<<"first" <<endl;
//     }
//     return 0;
// }

//q5
// #include<vector>
// #include<algorithm>
// #include<iostream>
// #include<unordered_set>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n;
//         cin >> n;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin >> arr[i];
//         if(arr[0] == 1) cout<<"yes"<<endl;
//         else cout<<"no"<<endl;
//     }
//     return 0;
// }