/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 29, 2021 - 05:28:10
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
  int main(){
    fast();
    int n,c=0,k;
    cin>>n>>k;
    int arr[n];
    loop0(i,n) cin>>arr[i];
    loop0(i,n){
        if (arr[i]<=k) c++;
        else break;
    }
    int index =c-1;
    for(int i=n-1;i>index;i--){
        if (arr[i]<=k) c++;
        else break;
    }
    cout<<c;
    return 0;
}