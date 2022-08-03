/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 16:57:29
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
    int n,l,ll;
    cin>>n;
    l=n/10;
    ll=n/10-l%10+n%10;
    if (n>=0) cout<<n;
    else cout<<max(l,ll);
    return 0;
}