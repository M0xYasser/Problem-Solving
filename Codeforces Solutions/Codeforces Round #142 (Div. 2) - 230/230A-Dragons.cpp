/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 18:08:25
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
 int ctr[1000+1];
int main(){
    fast();
    long long f,n,c=0;
    cin>>f>>n;
    int arr[n][2];
    loop0(i,n){
        loop0(j,2){
            cin>>arr[i][j];
        }
    }
    loop0(i,n){
        loop0(j,n) {
            if (f>arr[j][0]){
            ctr[j]++;
            if (ctr[j]==1){
                f+=arr[j][1];
                 c++;}
        }}
    }
    cout<<(c==n?"YES":"NO");
    return 0;
}