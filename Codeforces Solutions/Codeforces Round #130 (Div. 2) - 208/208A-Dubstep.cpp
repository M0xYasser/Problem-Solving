/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 26, 2021 - 08:15:30
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
#define pre(n)  fixed << setprecision(n)
#define all(v) v.begin(),v.end()
#define ts(t)  int t; cin>>t; while (t--)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    string s;
    cin>>s;
    int x;
    while (s.find("WUB")<s.size()) {
        x=s.find("WUB");
        s.replace(x,3,(x==0||x==s.size()-3||s[x-1]==' ')?"":" ");
        }
    cout<<s;
    return 0;
}