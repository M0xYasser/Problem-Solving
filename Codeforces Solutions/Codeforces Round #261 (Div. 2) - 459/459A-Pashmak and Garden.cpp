/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 02, 2021 - 12:22:07
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
    int x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    if (x1==x2){
        cout<<x1+abs(y1-y2)<<" "<<y1<<" "<<x1+abs(y1-y2)<<" "<<y2;
    }else if (y1==y2){
        cout<<x1<<" "<<y1-abs(x1-x2)<<" "<<x2<<" "<<y1-abs(x1-x2);
    }else if (abs(x1-x2)==abs(y1-y2)){
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }else{
        cout<<-1;
    }
    return 0;
}