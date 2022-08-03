#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int a,b,n,res;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    if (s[a-1]==s[b-1]) res=0;
    else res=1;
    cout<<res;
    return 0;
}