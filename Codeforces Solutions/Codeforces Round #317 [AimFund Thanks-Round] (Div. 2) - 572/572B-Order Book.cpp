#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int t,p,q,n;
    char c;
    map <int,int,greater<>> s,b,S;
    cin>>t>>n;
    while (t--)
    {
        cin>>c>>p>>q;
        if (c=='S') {
            s[p]+=q;
        }else{
            b[p]+=q;
        }
     }
     int i=0;
    for (auto it =s.rbegin();it!=s.rend()&&i<n;it++,i++){
        S.insert({it->first,it->second});
    }
    i=0;
    for (auto it =S.begin();it!=S.end()&&i<n;it++,i++){
        cout<<'S'<<" "<<it->first<<" "<<it->second<<endl;
    }
    i=0;
    for (auto it =b.begin();it!=b.end()&&i<n;it++,i++){
        cout<<'B'<<" "<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}