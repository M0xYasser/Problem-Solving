#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int t;cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        deque <int> dq(n);
        for (int i=0;i<n;i++) cin>>dq[i];
        int ptr=0;
        while (k--)
        {
            while(dq[ptr]==0&&ptr<n){ ptr++;}
            if (ptr==n) break;
            dq[ptr]--;dq[n-1]++;
        }
        for (auto x:dq){
            cout<<x<<" ";
        }
        cout<<endl;
            }
        return 0;
}