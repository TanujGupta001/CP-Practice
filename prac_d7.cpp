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
//         cin >> n;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin >> a[i];
//         vector<int>b;
//         for(int i = 0 ; i <  n ; i++){
//             int diff = abs(i+1 - a[i]);
//             if(diff==0) continue;
//             b.push_back(diff);
//         }
//         int ans = b[0];
//         for(int i = 1 ; i < b.size() ; i++){
//              ans = __gcd(ans,b[i]);
//         }
//         cout << ans << endl;
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
//         int n , q;
//         cin >> n >> q;
//         vector<int>a(n);
//         for(int i = 0 ; i < n ; i++) cin >> a[i];
//          vector<int>pref(n+1);
//            int sum=0;
//            for(int i=0;i<n;i++){
//             pref[i]=sum;
//             sum+=a[i];
//            }
//            pref[n]=sum;
//         while(q--){
//             int l,r,k;
//             cin >> l >> r >> k;
//             int s = sum;
//             int ans = s - pref[r] + pref[l-1] ;
//             ans += ((r-l+1)*k);
//             if(ans % 2 != 0) cout << "Yes" <<endl;
//             else cout << "No" << endl;
//         }
//     }
//     return 0;
// }

// //Q11
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
//         cin >> n;
//         vector<int>nums(n);
//         for(int i = 0 ; i<n ; i++) cin >> nums[i] ;
//         for(int i = 0 ; i < n-1 ; i++){
//             if(nums[i] == 1) nums[i]++;
//         }
//         for(int i = 0 ; i < n-1 ; i++){
          
//             if (nums[i + 1] % nums[i] == 0)
// 				nums[i + 1]++; 
//         }
//         for(int i = 0 ; i<n ; i++)cout << nums[i] << " ";
//         cout <<endl;
//     }
//     return 0;
// }

//q12
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t; 
// 	while (t--)
// 	{
// 		long long n;
// 		cin >> n; 
// 		vector<long long> v(n);
// 		for (long long i = 0; i < n; i++) 
// 			cin >> v[i];

// 		long long answer = v[n - 1] - v[0];

// 		// Check the maximum difference between any element and the first element
// 		for (int i = 1; i < n; i++)
// 			answer = max(answer, v[i] - v[0]);

// 		// Check the maximum difference between the last element and any other element
// 		for (int i = 0; i < n - 1; i++)
// 			answer = max(answer, v[n - 1] - v[i]);

// 		// Check the maximum difference between consecutive elements
// 		for (int i = 0; i < n - 1; i++)
// 			answer = max(answer, v[i] - v[i + 1]);

// 		// Output the maximum difference found
// 		cout << answer << endl;
// 	}
// 	return 0;
// }

