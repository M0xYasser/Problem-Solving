/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 17:28:41
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
    int n,m,x;
    cin>>n>>m;
    if(n%2==0) x=n/2;
    else x=n/2+1;
    for (int i=x;i<=n;i++){
        if (i%m==0){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}