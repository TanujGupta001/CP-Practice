#include<bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b ){
    long long opt = 0;

        while(a != b && a%2 == 0 ){
            opt++;
            a = a/2;
        }
        if(a != b) return -1;
        int count = 0;
        while(opt != 0 && opt - 3 >= 0) {opt -= 3;count++;}
        while(opt !=0 && opt - 2 >= 0) {opt -= 2;count++;}
        while(opt != 0 && opt -1 >= 0 ) {opt -= 1; count++;}
        return count;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tst;
    cin>>tst;
    while(tst--){
        long long a , b;
        cin >> a >> b;
        if(a == b) cout << 0 <<endl;
        else if(a > b) cout << solve(a,b) << endl;
        else if(a < b) cout << solve(b,a) << endl;
    }
    return 0;
}