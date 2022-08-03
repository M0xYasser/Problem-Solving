/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 05:13:29
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
    int n,d,a,b;
    cin>>n>>d;
    loop0(i,n){
        cin>>a>>b;
        if (a==7-d||b==7-d||a==d||b==d) {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}