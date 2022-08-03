/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 27, 2021 - 10:49:42
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
    int x,c,r;
    ts(t){
        cin>>x;
        int i=0;
        while(x>i*i){
            i++;
        }
        if (x<=i*i-i+1){
            c=i;r=x-i*i+2*i-1;
        }else{
            r=i;c=i*i-x+1;
        }
        cout<<r<<" "<<c<<endl;
    }
    return 0;
}