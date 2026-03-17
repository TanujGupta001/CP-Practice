#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tst;
    cin >> tst;

    while(tst--){
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        unordered_map<int,int> mpA, mpB;

        // longest segment in a
        int len = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]) len++;
            else{
                mpA[a[i-1]] = max(mpA[a[i-1]], len);
                len = 1;
            }
        }
        mpA[a[n-1]] = max(mpA[a[n-1]], len);

        // longest segment in b
        len = 1;
        for(int i = 1; i < n; i++){
            if(b[i] == b[i-1]) len++;
            else{
                mpB[b[i-1]] = max(mpB[b[i-1]], len);
                len = 1;
            }
        }
        mpB[b[n-1]] = max(mpB[b[n-1]], len);

        int ans = 0;

        for(auto &it : mpA){
            int val = it.first;
            ans = max(ans, it.second + mpB[val]);
        }

        for(auto &it : mpB){
            int val = it.first;
            ans = max(ans, it.second + mpA[val]);
        }

        cout << ans << "\n";
    }

    return 0;
}