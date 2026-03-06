// //q1
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int tst;
//     cin>>tst;
//     while(tst--){
//         long long  x,y;
//         cin >> x >> y;
//         long long ans = x + 4*y;
//         if(ans < 0 || ans%3!=0){
//             cout << "NO \n";
//             continue;
//         }
//         ans /= 3;
//         long long r = ans/2;
//         long long l = max(0LL,y);
        
//         cout <<(l <= r ? "YES \n" : "NO\n");
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

char getChar(int pos){
    return (pos % 2 ? 'a' : 'b');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        string x;
        cin >> n >> x;

        int low = 1, high = 1;

        for(int i=0;i<n;i++){
            int newLow = INT_MAX;
            int newHigh = INT_MIN;

            for(int L=low; L<=high; L++){
                int R = n - i - (L-1);

                char leftChar = getChar(L);
                char rightChar = getChar(R);

                if(x[i]=='?' || x[i]==leftChar){
                    newLow = min(newLow, L+1);
                    newHigh = max(newHigh, L+1);
                }
                if(x[i]=='?' || x[i]==rightChar){
                    newLow = min(newLow, L);
                    newHigh = max(newHigh, L);
                }
            }

            if(newLow>newHigh){
                low=1; high=0;
                break;
            }

            low=newLow;
            high=newHigh;
        }

        cout<<(low<=high?"YES\n":"NO\n");
    }
}