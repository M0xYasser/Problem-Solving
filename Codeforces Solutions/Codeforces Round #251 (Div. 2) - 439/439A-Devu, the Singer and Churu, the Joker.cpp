/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 02, 2021 - 19:54:03
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
 int ctr[4];
int main(){
    fast();
    int n,d,x,sum=0,ans,rest;
    cin>>n>>d;
    int arr[n];
    loop0(i,n) {
        cin>>x;
        sum+=x;
        }
    rest = (n-1)*10;
    if ((rest+sum)<=d){
        cout<<(d-sum)/5;
    }else {
        cout<<-1;
    }
    return 0;
}