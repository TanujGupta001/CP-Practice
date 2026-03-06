#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n,m;
        cin >> n >> m;
        vector<vector<int>>grid(n,vector<int>(m));
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> grid[i][j];
            }
        }
        int neg = 0,sum = 0;int mini = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                sum += abs(grid[i][j]);
                if( grid[i][j] < 0) neg++;
                mini = min(mini,abs(grid[i][j]));
            }
        }
        if(neg %2 == 0) cout << sum << endl;
        else cout << sum - (2*mini) << endl;
    }
    return 0;
}