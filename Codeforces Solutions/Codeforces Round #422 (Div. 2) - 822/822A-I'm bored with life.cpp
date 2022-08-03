#include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(01);i<n;i+=2)
#define pre(n)  fixed << setprecision(n)
#define all(v) v.begin(),v.end()
#define ts(t)  int t; cin>>t; while (t--)
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
 int fac (int a){
    if (a==1||a==0) return 1;
    else return a*fac(a-1);
}
int main(){
    fast();
    int x,y;
    cin>>x>>y;
    cout<<fac(min(x,y));
    return 0;
}