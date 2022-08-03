/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 19, 2021 - 08:57:07
*/
 #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for(int i=0; i<n ; i++)
#define pre(n) fixed<<setprecision(n)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int x;
    cin>>x;
    if (x%2==0&&x!=2) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}