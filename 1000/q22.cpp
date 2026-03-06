#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long  a , b;
        cin >> a >> b;
        	long long ans = INT_MAX; 
       for( long long addition = 0 ; addition <= 31 ; addition++){
       long long  opt = addition;
         long long new_b= b + addition;
                 if(new_b == 1) continue;
         long long new_a = a;

        while(new_a >0 ){
            new_a /= new_b;
            opt++;
        }
        ans = min(ans,opt);
       }
        cout << ans << endl;
        
    }
    return 0;
}