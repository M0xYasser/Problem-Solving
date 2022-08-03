/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 22, 2021 - 00:42:09
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
    double n,i(2),x(1),c(0);
    cin>>n;
    for (i;x<=n;i++){
        x+=i*(i+1)/2;
        c++;
    }
    cout<<c;
    return 0;
}