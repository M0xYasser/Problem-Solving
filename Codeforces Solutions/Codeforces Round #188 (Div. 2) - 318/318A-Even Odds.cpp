/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 19, 2021 - 09:27:33
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
    long long n,nOdd,k;
    cin>>n>>k;
    (n%2==0)?nOdd=n/2:nOdd=(n+1)/2;
    (k<=nOdd)?k=2*k-1:k=2*(k-nOdd);
    cout<<k;
    return 0;
}