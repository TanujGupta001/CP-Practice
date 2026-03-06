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
        string a;
        cin >> a;
        int j = 1;
        int ans = 0;
        bool isValid = true;
        for(int i = 0 ; i < n ; i++){
            if(a[j]-'a' <  a[i]-'a') {
                isValid = false;
                ans = i+1;
                break;
            }
            j++;
        }
        if(isValid) cout<<"No" <<endl;
        else {
            cout << "Yes" <<endl;
                cout<<ans <<" "<< j +1 <<endl;
        }
        
    }
    return 0;
}