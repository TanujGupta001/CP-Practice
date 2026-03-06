#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long x,y,k;
        cin >> x >> y >> k;
        long long cnt = k;
        long long initial_cnt = 1;
        long long final = y * k + k;
        bool first_move = true;

        while(initial_cnt < final){
            if(first_move){
                initial_cnt--;
                cnt++;
                initial_cnt += x;
                first_move = false;
            }
            else{
                
            }
        }
        cout << cnt << endl;
        
    }
    return 0;
}