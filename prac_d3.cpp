// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int s;
//         cin>>s;
//         vector<int>a(s);
//         for(int i = 0 ; i < s ;i++) cin>>a[i];
//         vector<int>ans;
//         ans.push_back(a[0]);
//         for(int i = 1 ; i < s ; i++){
//             if(a[i] >= a[i-1]) ans.push_back(a[i]);
//             else{
//                 ans.push_back(a[i]);
//                 ans.push_back(a[i]);
//             }
//         }
//         for(int i = 0 ; i < ans.size() ;i++) cout<<ans[i]<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

//q13
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
//          cin>>n;
//          vector<int>arr(n);
//          for(int i = 0 ; i < n ; i++) cin>>arr[i];
//          vector<int>a,b;
//          if(arr.size() == 1) cout<<"-1"<<endl;
//          else{
//             a.push_back(arr[0]);
//             for(int i = 1 ; i < arr.size() ;i++){
//                 if( a.back() % arr[i] == 0) a.push_back(arr[i]);
//                 else b.push_back(arr[i]);
//             }
//             if(a.size() == 0 || b.size() == 0) cout<<"-1" << endl;
//             else{
//                 cout<<a.size() << " " << b.size();
//                 cout<<endl;
//                 for(int i = 0 ; i < a.size();i++) cout << a[i] << " ";
//                 cout <<endl;
//                 for(int i = 0 ; i < b.size();i++) cout << b[i] << " ";
//                 cout <<endl;
//             }
//          }
//     }
//     return 0;
// }

//q14
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         int diff = c%2;
//         if(a + diff <= b) cout<<"Second"<<endl;
//         else cout<<"First"<<endl;

//     }
//     return 0;
// }

//q15
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
//         cin>>n;
//         vector<int>a(n);
//         for(int i  = 0  ; i < n ; i++) cin>>a[i];
//         long long sum = 0;
//         for(int i  = 0  ; i < n ; i++) sum += a[i];
//         if(sum % 2 == 0) cout << "yes" << endl;
//         else cout<<"no" << endl;
//     }
//     return 0;
// }


//16
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
//         bool isSorted = true;
//         for(int i = 1 ; i < n ;i++) {
//             if(a[i] < a[i-1]) {isSorted = false;break;}
//         }
//         if(!isSorted) cout<<0<<endl;
//         else{
//             int diff = INT_MAX;
//             for(int i = 1 ; i < n ; i++) diff = min(diff,a[i]-a[i-1]);
//             cout << diff/2 +1 << endl;
//         }
//     }
//     return 0;
// }

//q17
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n , k , x;
//         cin>>n>>k>>x;
//         if( k == 1 && x == 1) cout << "No" << endl;
//         else{
//             if( x == 1 && k == 2 && n%2 == 1) cout<<"No" << endl;
//             else if(x == 1 && k>=2){
//                  vector<int>nums;
//                 if(n%2 == 0) {
//                     while(n > 0) {
//                         nums.push_back(2);
//                         n -= 2;
//                     }
//                     cout<<"Yes"<<endl;
//                     cout<<nums.size()<<endl;
//                     for(int i = 0 ; i < nums.size() ; i++) cout<<nums[i]<<" ";
//                     cout<<endl;
//                 }else{
//                      while(n != 3) {
//                         nums.push_back(2);
//                         n -= 2;
//                     }

//                     nums.push_back(3);
//                     cout<<"Yes"<<endl;
//                     cout<<nums.size()<<endl;
//                     for(int i = 0 ; i < nums.size() ; i++) cout<<nums[i]<<" ";
//                     cout<<endl;
//                 }
//             }else{
//                 vector<int>arr;
//                 while(n>0) {
//                     arr.push_back(1);
//                     n-=1;
//                 }
//                 cout<<"Yes"<<endl;
//                 cout<<arr.size()<<endl;
//                 for(int i = 0 ; i < arr.size() ;i++) cout<<arr[i] << " ";
//                 cout<<endl;
//             }
//         }
//     }
//     return 0;
// }

//q18
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n , x ;
//         cin >> n >> x;
//         if( n % x > 0) {
//             cout<<1<<endl;
//             cout << n << endl;
//         }
//         else{
//             cout << 2 << endl;
//             int t = n;
//             while(t % x == 0) t--;
//             cout << t << " " << n-t << endl;
//         }
//     }
//     return 0;
// }

//q18
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
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin >> arr[i] ;
//         int pos = 0,neg=0;
//         for(int i = 0 ; i < n ; i++)
//         if(arr[i] > 0 ) pos++;
//         else neg++;
//         int op = 0;
//         if(neg%2 != 0){
//             pos++;neg--;
//             op++;
//         }
//         if(neg > pos){
//             int diff = neg - pos;
//             int opt = (diff+1)/2;
//             neg -= opt;
//             op += opt;
//             if(neg % 2 ==1) op++;
//         }
//         cout<<op;
//         cout<<endl;
//         }
    
//     return 0;
// }

//q27
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0 ; i < n ; i++) cin>>arr[i];
        double prod_total = 1;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++) prod_total *= arr[i];
        double prod = 1;
        int i = 0;
        bool isValid = true;
        while(i<n) {
            prod *= arr[i];
            prod_total /= arr[i];
            cnt++;
            if(prod == prod_total ) { isValid = false ; break;}
            else if(prod > prod_total) break;
            i++;
        }
        if(!isValid) cout<<cnt<<endl;
        else cout<<"-1"<<endl;
}
return 0;
}