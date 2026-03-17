#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long n , x;
        cin >> n >> x ;
        vector<long long>a(n);
        for(long long i = 0 ; i <  n ; i++) cin >> a[i];
        vector<pair<long long,long long>>p;
        for(long long i = 0 ; i < n ; i++) p.push_back({(a[i]-x),(a[i]+x)});
        long long f = p[0].first, s = p[0].second;
        long long opt = 0;
        for(long long i = 1 ; i < n ; i++){
            long long a = p[i].first, b = p[i].second;
            if(a <= s && b >= f){
                f = max(f,a);
                s = min(s,b);
            }else{
                opt++;
                f = a ;
                s = b;
            }
        }
        cout << opt << endl;
    }
    return 0;
}