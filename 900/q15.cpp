#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n ;
        cin >> n;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        if(n == 1) cout << 0 << endl;
        else{
            int op = 0;bool isValid = false;
            for(int i = n-2 ; i>= 0 ; i--){
                if(a[i] >= a[i+1]){
                    while(a[i] != 0 && a[i] >= a[i+1]){
                        a[i] /= 2;
                        op++;
                    }
                    if(a[i] == 0 && (i != 0 || a[i+1] == 0)) {isValid = true;break;}
                }
            }
            if(isValid) cout << -1 << endl;
            else cout << op << endl;
        }
    }
    return 0;
}