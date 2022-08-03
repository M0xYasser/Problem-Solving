/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 12:59:40
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
    int n,price,sellers,x;
    cin>>n>>price;
    loop0(i,n){
        cin>>sellers;int arr[sellers];
        loop0(j,sellers) {
            cin>>x;
            if(price>x) {s[i]++;}
        }
    }
    int counter=0;
    loop0(i,n) {
        if (s[i]>=1) counter++;
    }
    cout<<counter<<endl;
    loop0(i,n) {
        if (s[i]>=1) cout<<i+1<<" ";
    }
}