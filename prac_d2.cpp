//q6
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int  n;
//         cin>>n;
//         vector<int>arr(n);
//         for(int i = 0 ; i< n ; i++) cin >> arr[i];
//         bool isValid =true;
//         int freq1 = 0 , freq2 = 0 , no1 = -1 , no2 = -1;
//         for(int i= 0 ; i < n ; i++){
//             if(no1 == -1  || arr[i] == no1) {
//                 no1=arr[i];
//                 freq1++;
//             }else if(no2 == -1  || arr[i] == no2) {
//                 no2=arr[i];
//                 freq2++;
//         }else {isValid = false;break;}
//     }
//     if(!isValid) cout<<"no"<<endl;
//     else{
//         if(freq1 == freq2) cout<<"yes"<<endl;
//         else if(n%2 == 1 && abs(freq1-freq2) == 1) cout<<"yes"<<endl;
//         else if(freq1 == n && freq2 == 0) cout<<"yes"<<endl;
//         else cout<<"no" << endl;
//     }
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
//         int n,m;
//         cin>>n>>m;
//         string x;string s;
//         cin>>x>>s;
//         string ans=x;
//         bool find = false;
//         int op = 0;
//         while(true){
//             if(ans.size()>=s.size())
//             for(int i=0;i<ans.size();i++){
//                 if(ans.substr(i,m)==s){
//                     cout<<op;
//                     find=true;
//                     break;
//                 }
//             }
//             if(find==true)break;
//             if(op>2&&ans.size()>m){
//                 cout<<-1;
//                 find=true;
//                 break;
//             }
//             op++;
//             ans+=ans;
//         }
//         if(find==false)cout<<-1;
//         cout<<endl;
//         }
       
//     }

//q8
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int n , m;
//         cin >> n >> m;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n ; i++) cin>> arr[i];
//          bool isPresent= false;
//          for(int i = 0 ; i < n ; i++)
//          if(arr[i] == m){
//             isPresent = true;
//             break;
//          }
//     if(isPresent) cout<<"yes"<<endl;
//     else cout<<"no"<<endl;
//     }
//     return 0;
// }
 
//q9
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
//         cin>>n;
//         vector<int>arr(n);
//         for(int i = 0 ; i < n-1 ;i++) cin>>arr[i];
//         int sum = 0;
//         for(int i = 0 ; i < n-1 ; i++) sum+=arr[i];
//         if(sum >0 || sum < 0) cout<<sum*(-1)<<endl;
//         else  cout<<sum<<endl;
//     }
//     return 0;
// }

//q10
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         vector<vector<char>>ring(10,vector<char>(10));
//         for(int i = 0 ; i < 10 ; i++){
//             for(int j = 0 ; j < 10 ; j++){

//                 cin >> ring[i][j];
//             }
//         }
//         int ans = 0;
//         for(int i = 0 ; i < 10 ; i++){
//             for(int j = 0 ; j < 10 ; j++){
//                 if(ring[i][j] == 'X'){
//                     if((i==0 && j < 10 )|| (i == 9 && j<10)|| (j==0 && i<10) || (j == 9 && i <10) ) ans +=1;
//                     if((i==1 && j>0 && j < 9 )|| (i == 8 && j>0 && j<9)|| (j==1 && i>0 && i<9) || (j == 8 && i>0 && i <9) ) ans +=2;
//                     if((i==2 && j>1 && j < 8 )|| (i == 7 && j>1 &&  j<8)|| (j==2 && i>1 && i<8) || (j == 7 && i>1 && i <8) ) ans +=3;
//                     if((i==3 && j>2 && j < 7 )|| (i == 6 && j>2 && j<7)|| (j==3 && i>2 && i<7) || (j == 6 && i>2 && i <7) ) ans +=4;
//                     if((i==4 && j>3 && j < 6 )|| (i == 5 && j>3 && j<6)|| (j==4 && i>3 && i<6) || (j == 5 && i>3 && i <6) ) ans +=5;
//                 }
//             }
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

//q11
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//  long long n;
    
//     cin >> n;
//     vector<long long>a(n);
    
//     for (int i = 0; i < n; i++) 
//         cin >> a[i];
 
//     long long minimum_operations = INT_MAX;
//     for (int i = 0; i < n; i++) 
//         minimum_operations = min(minimum_operations, abs(a[i]));
//     cout << minimum_operations << endl;
//     }

//q12
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
//         for(int i = 0 ; i < ans.size() ;i++) cout<<ans[i]<<"/t";
//         cout<<endl;
//     }
//     return 0;
// }
