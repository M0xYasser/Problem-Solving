/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 23, 2021 - 22:03:01
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int n,x;
    cin>>n;
    int arr[n];
    loop0(i,n){
        cin>>x;
        arr[x-1]=i+1;
    }
    loop0(i,n) cout<<arr[i]<<" ";
     return 0;
}