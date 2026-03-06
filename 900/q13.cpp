#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int n;
        cin >> n;
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        int digit = 0;int cnt = 0;
        bool isdigit = false;
        for(int i =0 ; i < n  ; i++){
            if(i < n && a[i] != 0){
                digit++;
                isdigit = true;
            }
            else if(a[i] == 0 && digit > 0){
                digit = 0;
                cnt++;
            }else digit = 0;;
        }
        if(digit == 0 && !isdigit) cout << 0 << endl;
        else if((digit > 0 && cnt == 0) ||(digit == 0 &&  cnt == 1)) cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}
