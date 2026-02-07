#include<bits/stdc++.h>
using namespace std;
#include<iostream>

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
   int arr[n];
   for (int i = 0; i < n; i++) cin >> arr[i];
   vector<int>trailingZeros(n,0);
   int totalDigits = 0;
   for(int i = 0 ; i < n ; i++){
       while(arr[i] % 10 == 0){
           trailingZeros[i]++;
           arr[i] /= 10;
           totalDigits++;
       }
       while(arr[i] > 0){
           totalDigits++;
		   arr[i] /= 10;
       }
   }
   sort(trailingZeros.rbegin(),trailingZeros.rend());
   for(int i = 0 ; i < n; i+=2) totalDigits -= trailingZeros[i];
   if(totalDigits> m) cout<<"Sasha"<<endl;
   else cout<<"Anna";
    }
    return 0;
}