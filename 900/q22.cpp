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
        vector<int>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];
        long long sum = 0;
        long long zero =0,ones =0;
        for(int i =0 ; i < n ; i++){ 
            sum += a[i];
        if(a[i]==0)zero++;
        else if(a[i]==1) ones++;
        }
        if(sum -1 < 0) cout<<0<<endl;
        else{
        long long ans = pow(2, zero) * ones;
        cout << ans <<endl;
        }
    }
    return 0;
}