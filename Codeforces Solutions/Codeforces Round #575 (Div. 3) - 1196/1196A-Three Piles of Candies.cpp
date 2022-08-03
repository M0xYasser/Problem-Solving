/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 13, 2021 - 20:46:53
*/
 #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for(int i=0; i<n ; i++)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void rw (){
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
 freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fast();
    long long n,a,b,c;
    cin>>n;
    loop0(i,n){
        cin>>a>>b>>c;
        cout<<(a+b+c)/2<<endl;
    }
    return 0;
}