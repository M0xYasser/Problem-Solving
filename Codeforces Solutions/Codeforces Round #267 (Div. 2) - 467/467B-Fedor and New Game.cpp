#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int n,m,k,c=0,x;cin>>n>>m>>k;
    int arr[m+2];
    for (int i=0;i<=m;i++) cin>>arr[i];
    x=arr[m];
    for (int i=0;i<m;i++) {
        if (__builtin_popcount(arr[i]^x)<=k) c++;
        }
        cout<<c;
     return 0;
}