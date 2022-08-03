/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 15:44:12
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
 int s[51];
int main(){
    fast();
    ts(t){
        int n,c=0;
        cin>>n;
        int arr[n];
        loop0(i,n) cin>>arr[i];
        sort(arr,arr+n,greater<int>());
        int g=n;
        loop0(i,n){
            if (arr[i]<=g){
                c++;
            }else g--;
        }
        cout<<c+1<<endl;
    }
}