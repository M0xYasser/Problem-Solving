/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 28, 2021 - 17:41:21
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
    string s;
    loop0(i,n){
        cin>>s;
        int a=0,b=0,c=0;
        loop0(j,s.size()){
                if (s[j]=='A') a++;
                else if (s[j]=='B') b++;
                else c++;
        }
        if (b==a+c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}