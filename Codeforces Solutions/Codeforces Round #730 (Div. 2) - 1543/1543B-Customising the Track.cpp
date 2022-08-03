/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 22, 2021 - 02:47:15
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
    long long n,t,sum=0,x,y,a;
    cin>>t;
    loop0(i,t){
        cin>>n;
        loop0(j,n){
            cin>>a;
            sum+=a;
        }
        x=sum/n;
        y=sum-x*n;
        cout<<(n-y)*y<<endl;
        sum=0;
    }
    return 0;
}