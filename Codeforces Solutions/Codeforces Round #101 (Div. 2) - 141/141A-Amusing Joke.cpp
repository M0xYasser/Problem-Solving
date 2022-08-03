#include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(01);i<n;i+=2)
#define pre(n)  fixed << setprecision(n)
#define all(v) v.begin(),v.end()
#define ts(t)  int t; cin>>t; while (t--)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    string a,b,c;
    cin>>a>>b>>c;
    a+=b;
    sort(all(a));sort(all(c));
    if (a==c) cout<<"YES";
    else cout<<"NO";
    return 0;
}