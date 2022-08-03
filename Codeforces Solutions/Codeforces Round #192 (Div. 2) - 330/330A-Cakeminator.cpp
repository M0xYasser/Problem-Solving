/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 10:18:05
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
    int h,w,c=0,ans=0,r=0,col=0;
    cin>>h>>w;
    string s[h],p="";
    loop0(i,h){
        cin>>s[i];
    }
    loop0(i,w) p+='.';
    loop0(i,h){
       if (s[i]==p) {ans+=w;r++;}
    }
    loop0(i,w){
       loop0(j,h){
           if (s[j][i]=='.') c++;
       }
       if (c==h) {ans+=h;col++;}
       c=0;
    }
    cout<<ans-r*col;
    return 0;
}