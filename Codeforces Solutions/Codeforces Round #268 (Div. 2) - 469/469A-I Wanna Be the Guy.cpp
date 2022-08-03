/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 27, 2021 - 21:24:08
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
 int arr[10];
int main(){
    fast();
    int l;
    cin>>l;
    int temp=l;
    int n,m,x,y,c(0);
    cin>>n;
    loop0(i,n){
        cin>>x;
        arr[x]++;
    }
    cin>>m;
    loop0(i,m){
        cin>>y;
        arr[y]++;
    }
    while (l){
        if (arr[l]>=1) c++;
        l--;
    }
    cout<<((c==temp)?"I become the guy.":"Oh, my keyboard!");
    return 0;
}