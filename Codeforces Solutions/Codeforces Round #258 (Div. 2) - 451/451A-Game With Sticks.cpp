/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 25, 2021 - 15:29:53
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
#define pre(n)  fixed << setprecision(n)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int n,m;
    cin>>n>>m;
    cout<<(n*m/max(m,n)%2==0?"Malvika":"Akshat");
    return 0;
}