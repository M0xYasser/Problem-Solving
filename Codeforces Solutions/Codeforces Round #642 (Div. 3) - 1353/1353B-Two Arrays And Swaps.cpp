#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;cin>>t;
    while (t--)
    {
        int n,k,sum=0;cin>>n>>k;
        int g[n],s[n];
        for (int i=0;i<n;i++){
            cin>>g[i];
        }
        for (int i=0;i<n;i++){
            cin>>s[i];
        }
        sort(g,g+n);
        sort(s,s+n,greater<int>());
        for (int i=0;i<k;i++){
            if (s[i]>g[i]) {
                g[i]=s[i];
                }
        }
        cout<<accumulate(g,g+n,0)<<endl;
    }
        return 0;
}