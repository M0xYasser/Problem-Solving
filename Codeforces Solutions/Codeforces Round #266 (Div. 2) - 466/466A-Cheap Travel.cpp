/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 16:38:26
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
 int arr[27];
int main(){
    fast();
    int n,m,a,b,x,y;
    cin>>n>>m>>a>>b;
    y=n;
    x=n/m;
    n-=x*m;
    cout<<min({x*b+n*a,x*b+b,y*a});
    return 0;
}