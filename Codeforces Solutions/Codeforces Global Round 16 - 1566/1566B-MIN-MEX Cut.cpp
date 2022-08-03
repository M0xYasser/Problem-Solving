#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main()
{
    fast();
    int t;cin>>t;
    while(t--){
        string s;int n,one=0,zero=0;
        cin>>s;
        s=string(s.begin(),unique(s.begin(),s.end()));
        one=count(s.begin(),s.end(),'1');
        zero=count(s.begin(),s.end(),'0');
        if (zero>0&&one>0) cout<<min({2,zero})<<endl;
        else if (zero>0) cout<<1<<endl;
        else cout<<0<<endl;
     }
    return 0;
}