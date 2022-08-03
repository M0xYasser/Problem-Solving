#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    string s;cin>>s;
    bool flag=0;
    for (int i=0;i<s.size();i++){
        if (s[i]=='0'&&flag==0){
            flag=1;
            continue;
        }
        if (i==s.size()-1&&flag==0) continue;
        cout<<s[i];
    }
    return 0;
}