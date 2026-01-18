// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int tst;
//     cin>>tst;
//     while(tst--){
//         int a;
//         cin >> a;
//         vector<int>arr(a);
//         for(int i  = 0 ; i < a ; i++) cin >> arr[i];
//         if(arr[0] == 0 && arr[a-1] == 0) cout<<"bob"<<endl;
//         else cout<<"alice"<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int solve(){
    long long n,k,m;
    cin >> n >> m >> k;
    long long st = k-1;
    long long end = n-k;
    long long ans = 1;
    for(long long l = 1 ; l <= n ; l++){
        long long ct = 2*l-1;
        if(ct>m) break;
        long long day = m-ct;
        if(l <= st){
            long long s = min(l,end);
            s = min(s,day);
            ans = max(ans,l+s+1);
        }
        if(l<=end){
              long long s = min(l,st);
            s = min(s,day);
            ans = max(ans,l+s+1);
        }
    }
    cout<<ans<<"\n";
}
int main(){
    int tst;
    cin>>tst;
    while(tst--){
       solve();
    }
    return 0;
}
