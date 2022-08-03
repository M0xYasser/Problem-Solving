/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 15:43:14
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
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max({a+b*c,a*(b+c),a*b*c,(a+b)*c,a+b+c});
    return 0;
}