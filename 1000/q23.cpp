#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    for(int i = 2 ; i <= sqrt(x) ; i++){
        if(x%i == 0) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int d;
        cin >> d;
        int p = 1+d;
            while(!isPrime(p)) p++;
        int q = p+d;
        while(!isPrime(q)) q++;
        cout << p * q << endl;
    }
    return 0;
}