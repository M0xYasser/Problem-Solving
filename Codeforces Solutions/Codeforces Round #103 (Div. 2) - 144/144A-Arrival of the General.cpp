/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 28, 2021 - 09:36:15
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
    int n;
    cin>>n;
    int arr[n];
    loop0(i,n) cin>>arr[i];
    int mx=find(arr,arr+n,*max_element(arr,arr+n))-arr;
    reverse(arr,arr+n);
    int mn=find(arr,arr+n,*min_element(arr,arr+n))-arr;
    cout<<((mx>=n-mn)?mx+mn-1:mx+mn);
    return 0;
}