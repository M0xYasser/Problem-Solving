/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 20, 2021 - 20:24:48
*/
  #include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    double n,m,a;
    cin>>n>>m>>a;
    long long res =ceil(n/a)*ceil(m/a);
    cout<<res<<endl;
    return 0;
}