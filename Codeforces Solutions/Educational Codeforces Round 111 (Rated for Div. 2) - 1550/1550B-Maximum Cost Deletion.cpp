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
        int n,a,b,sum,c=1;cin>>n>>a>>b;
        sum=n*a;
        string s;
        cin>>s;
        for (int i=1;i<n;i++){
            if (s[i]!=s[i-1]){
                c++;
            }
        }
        if(b>=0) sum+=n*b;
        else sum+=(c/2+1)*b;
        cout<<sum<<endl;
            }
        return 0;
}