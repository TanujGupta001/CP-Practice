#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        long long n;
        cin >> n;
        vector<long long>a(n);
        for(int i = 0 ; i < n ; i++) cin >> a[i];

        unordered_set<long long>s;
          for(int i = 0 ; i < n ; i++) s.insert(a[i]);
          if(s.size() < n ) cout << "yes" <<endl;
          else cout <<"No"<<endl;

        
    }
    return 0;
}