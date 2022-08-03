#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    string s,ans="hello";
    cin>>s;
    int i=0;
    vector <char> v;
    for (char c:s){
        if (ans[i]==c) i++;
    }
    cout<<(i==5?"YES":"NO");
    return 0;
}