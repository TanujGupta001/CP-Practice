#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long  n;
        cin >> n;
        long long  m ;
        cin >> m;
        vector<long long >a(n);
        vector<long long >b(n);
        for(auto &i :a ) cin >> i;
         for(auto &i :b ) cin >> i;
         vector<pair<long long ,long long >>c;
         for(int i = 0 ; i < n ; i++) c.push_back({b[i],a[i]});
         sort(c.begin(),c.end());
         long long  cost = m,person = 1;
         for(int i = 0 ; i < n ; i++){
            long long  ct = c[i].first;
            long long  no = c[i].second;
            if(ct > m) break;
            if(person + no > n){
                cost += (n-person)*ct;
                person = n;
                break;
            }else{
                cost += no * ct;
                person += no;
            }
         }
         if(person <  n) cost += (n-person)*m;
         cout << cost << endl;
         

    }
    return 0;
}