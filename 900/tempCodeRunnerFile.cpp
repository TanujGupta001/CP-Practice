#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long tst;
    cin>>tst;
    while(tst--){
        long long a , b , c;
        cin >> a  >> b >> c;
        if(((long long)2*b % (long long)(a+c) == 0 )|| ((long long)(a+c) % (long long)2*b == 0)) cout << "Yes" <<endl;
        else if(((long long)(a % (long long)(2*b-c) ) == 0 )|| (( (long long)(2*b-c)% (long long)a) == 0))  cout << "Yes" <<endl;
        else if((((long long)c % (long long)(2*b-a) ) == 0) || (( (long long)(2*b-a)% (long long)c) == 0))  cout << "Yes" <<endl;
        else cout<< "No" <<endl;
    }
    return 0;
}