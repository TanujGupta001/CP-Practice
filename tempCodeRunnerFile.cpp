//q6
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tst;
    cin>>tst;
    while(tst--){
        int  n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0 ; i< n ; i++) cin >> arr[i];bool isValid =true;
        int freq1 = 0 , freq2 = 0 , no1 = -1 , no2 = -1;
        for(int i= 0 ; i < n ; i++){
            if(no1 == -1  || arr[i] == no1) {
                no1=arr[i];
                freq1++;
            }else if(no2 == -1  || arr[i] == no2) {
                no1=arr[i];
                freq2++;
        }else {isValid = false;break;}
    }
    if(!isValid) cout<<"no"<<endl;
    else{
        if(freq1 == freq2) cout<<"yes"<<endl;
        else if(n%2 == 1 && abs(freq1-freq2) == 1) cout<<"yes"<<endl;
        else if(freq1 == n && freq2 == 0) cout<<"yes"<<endl;
        else cout<<"no" << endl;
    }
    }
    return 0;
}