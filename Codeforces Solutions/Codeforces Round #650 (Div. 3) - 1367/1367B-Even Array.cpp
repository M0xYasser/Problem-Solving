/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 29, 2021 - 08:06:59
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
  int fac (int n)
{
    if(n > 1)
        return n * fac(n - 1);
    else
        return 1;
}
int main(){
    fast();
    int n,t;
    cin>>n;
    loop0(i,n){
        cin>>t;
        int arr[t],ctr=0,ne=0,no=0;
        loop0(j,t){
            cin>>arr[j];
            if (arr[j]%2!=j%2) {
                if (arr[j]%2==0) ne++;
                else no++;
            }  
    }
    if (ne==no) cout<<ne<<endl;
        else cout<<-1<<endl;}
    return 0;
}