#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int a,b;
        cin >> a >> b;
        if(a == 1 && b == 1){
            cout << 3 << endl;
        }
        else if ( a - 1 == 0 && b > 1) cout << 2 << endl;
        else if (a - 1 == 0 && b == 0) cout << 1 << endl;
        else{
            int xors = 0;
            for(int i = 0 ; i < a ; i++) xors ^= i;
            if(xors == b) cout << a << endl;
            else cout << a+1 << endl;
        }
        
    }
    return 0;
}