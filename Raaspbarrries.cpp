#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int tst;
    cin>>tst;
    while(tst--){
        int n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        for(long long i = 0  ; i < n ; i++){
            cin>>arr[i];
        }
        long long ans = INT_MAX, even_count = 0;
        for(long long i = 0 ; i < n ; i++){
            if (arr[i] % 2 == 0)
				even_count++; 
            if(arr[i] % k == 0){
                ans = 0;
                break;
            }else{
                long long need = k - (arr[i] % k);
                ans = min(ans, need);
            }
        }
        if (k == 4)
		{
			if (even_count >= 2)
				ans = min(ans, 0LL); 
			else if (even_count == 1)
				ans = min(ans, 1LL);
			else if (even_count == 0)
				ans = min(ans, 2LL);
		}
        cout<<ans<<endl;
    }
    return 0;
}