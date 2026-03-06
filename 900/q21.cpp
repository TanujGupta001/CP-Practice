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
        int count = 0;
        if(n > 0 && n % 25 == 0 ) cout << 0 << endl;
        else{
            int count = 0;
            int f = -1 , z = -1;
            while(n % 5 != 0) {
                n /= 10;
                 count++;
            }
            if(n % 25 == 0) cout << count <<endl;
            else{
                int digit = n%10;
                n /= 10;
                if(digit == 0){
                     z = 1;
                     while(n%10 != 5 || n%10 != 0){
                        n /= 10;
                        count++;
                     }
                     break;
                }
                else if(digit == 5){
                     f = 1;
                     while(n%10 != 7 || n%10 != 2 ){
                        
                        n /= 10;
                        count++;
                     }
                     break;
                }
               
                cout<<count<<endl;
            }
        }
      
    }
    return 0;
}