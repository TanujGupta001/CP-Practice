#include<bits/stdc++.h>
using namespace std;

    int solve(int i, int j, string &s1, string &s2, vector<vector<int>>& dp){
        if(i == s1.size() || j == s2.size())
            return 0;

        if(dp[i][j] != -1)
            return dp[i][j];

        int cur = 0;

        if(s1[i] == s2[j]){
            cur = 1 + solve(i+1, j+1, s1, s2, dp);
            ans = max(ans, cur);
        }


        solve(i+1, j, s1, s2, dp);
        solve(i, j+1, s1, s2, dp);

        return dp[i][j] = cur;
    }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        string a , b;
        cin >> a >> b;
        if(a == b) cout<<0<<endl;
        else{
            int num = a.size()-b.size();
             int n = a.size(), m = b.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
            int ans=solve(0,0,a,b,dp);
            cout << num-(2*ans) <<endl;
        }
    }
    return 0;
}