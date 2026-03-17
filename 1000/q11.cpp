#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        int n , k;
        cin >> n >> k;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        sort(a.begin() , a.end());
        int i = -1 , j = n-1;int team = 1;
        int ans = 0;
        while(i < j){
            if (team * a[j] <= k && i < j ) {
                i++;
                team++;
            }else{
                ans++;
                j--;
                team=1;
            }
            
        }
        cout << ans <<endl;
    
    return 0;
}