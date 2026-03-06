//q1
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long  x,y;
        cin >> x >> y;
        if((x-3*y)%2 == 0) cout<<"YES\n";
        else cout << "NO\n";
    }
    return 0;
}