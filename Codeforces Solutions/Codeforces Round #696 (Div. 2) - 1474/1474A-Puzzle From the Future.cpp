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
        int n;cin>>n;
        string s;cin>>s;
        cout<<1;
        int sum=s[0]-'0'+1;
        for (int i=1;i<n;i++){
            int cur=s[i]-'0'+1;
            if (sum==cur){
                cout<<0;
                sum=cur-1;
            }else {
                cout<<1;
                sum=cur;
            }
                    }
        cout<<endl;
    }
        return 0;
}