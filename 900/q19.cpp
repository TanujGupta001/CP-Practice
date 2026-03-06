#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long pos;
        cin >> pos;
        long long jump;
        cin >> jump;
        long long final_jump ;
        if(jump % 4 == 1)final_jump = -jump;
        else if(jump % 4 == 2)final_jump = 1;
         else if(jump % 4 == 3)final_jump = jump+1;
           else if(jump % 4 == 0) final_jump = 0;
          if(pos % 2 == 0) cout << pos + final_jump << endl;
          else cout << pos - final_jump << endl;

        
    }
    return 0;
}