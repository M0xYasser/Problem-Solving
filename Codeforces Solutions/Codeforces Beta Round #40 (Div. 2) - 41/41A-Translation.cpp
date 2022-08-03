/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 29, 2021 - 06:05:08
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
    string s1,s2;
    cin>>s1>>s2;
    reverse(all(s2));
    if (s1==s2) cout<<"YES";
    else cout<<"NO";
    return 0;
}