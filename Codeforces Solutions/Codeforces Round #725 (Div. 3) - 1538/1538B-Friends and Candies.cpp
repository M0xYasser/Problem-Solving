/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 22, 2021 - 01:25:56
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
    int x,n,a[200001],s=0,c=0;
    cin>>x;
    loop0(i,x){
        cin>>n;
        loop0(j,n){
            cin>>a[j];
            s+=a[j];
        }
        loop0(k,n){
            if (a[k]-s/n>0) c++;
        }
        if (s%n==0) cout<<c<<endl;
        else cout<<-1<<endl;
        c=0;
        s=0;
    }
    return 0;
}