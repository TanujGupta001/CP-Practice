// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	long long t;
// 	cin >> t;

// 	while (t--)
// 	{
// 		long long n;
// 		cin >> n;
// 		if (n < 4 || n % 2 == 1)
// 			cout << -1 << '\n'; 
// 		else
// 		{
//             long long min_buses = (n + 5) / 6; // integer ceil of n/6
//             long long max_buses = n / 4;       // integer floor of n/4
// 			cout << min_buses << " " << max_buses << '\n';
// 		}
// 	}

// 	return 0;
// }

// // Time Complexity (TC): O(1)
// // Space Complexity (SC): O(1)

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin >> a[i];

        long long ans = 0;

        for(int i=1;i<=n;i++){
            if(a[i] > n) continue;

            for(int k=1;;k++){
                long long j = i + 1LL*a[i]*k;
                if(j > n) break;
                if(a[j] == k)
                    ans++;
            }
        }

        cout << ans << "\n";
    }
}
