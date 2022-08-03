/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 26, 2021 - 12:24:18
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
 bool isPrime (int n){
    bool prime =true;
    for (int i(2);i<=sqrt(n);i++){
        if (n%i==0) prime = false;
    }
    if (prime && n!= 1 && n!=0 ) return true;
    else return false;
}
int main(){
    fast();
    int x;
    loop0(i,5){
        loop0(j,5){
            cin>>x;
            if (x==1){
                cout<<abs(2-i)+abs(2-j);
                return 0;
            }
        }
    }
    return 0;
}