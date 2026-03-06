#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int a;
        cin >> a;
        string n;
        cin >> n;
        int s = 0 , cnt = 0, i = 0;
        while(i < n.size()){
            if(n[i] == ')') s++;
            else s--;
            i++;
            cnt =  max(cnt , s);
        }
        cout << cnt << endl;
    }
    return 0;
}