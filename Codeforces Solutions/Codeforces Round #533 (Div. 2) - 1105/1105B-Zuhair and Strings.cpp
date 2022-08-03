/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 27, 2021 - 12:02:38
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
    int k,n,mx=0;
    string s;
    cin>>n>>k>>s;
    for (int i='a';i<='z';i++){
        int chr=0,c=0;
        loop0(j,n){
            if (s[j]==i) chr++;
            else chr=0;
            if (chr==k) {
                c++;
                chr=0;
            }   
        }
        mx=max(c,mx);
    }
    cout<<mx;
    return 0;
}