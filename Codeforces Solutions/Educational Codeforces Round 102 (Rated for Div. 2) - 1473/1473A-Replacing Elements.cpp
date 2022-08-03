/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 06:00:03
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
    ts(t){
        int n,d,s,c=0;
        cin>>n>>d;
        int arr[n];
        loop0(i,n){
            cin>>arr[i];
            if (arr[i]<=d) c++;
        }
        sort(arr,arr+n);
        int mn=arr[0]+arr[1];
        loop0(j,n){
           if (arr[j]>d&&mn<=d){
               c++;
           }
        }
        if (c==n)  cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
            }
    return 0;
}