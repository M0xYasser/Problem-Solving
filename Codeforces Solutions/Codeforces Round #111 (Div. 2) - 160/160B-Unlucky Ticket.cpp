#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int n;cin>>n;
    string s;cin>>s;
    sort(s.begin(),s.begin()+n);
    sort(s.begin()+n,s.end());
    bool cond1=true,cond2=true;
    for (int i=0;i<n;i++){
        cond1&=(s[i]>s[i+n]);
        cond2&=(s[i]<s[i+n]);
    }
    if (cond1 ==1 || cond2 ==1) cout<<"YES";
    else cout<<"NO";
    return 0;
}