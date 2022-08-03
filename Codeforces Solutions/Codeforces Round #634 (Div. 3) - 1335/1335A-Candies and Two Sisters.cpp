#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int t;cin>>t;
    while(t--){
       int x;cin>>x;
       cout<<((x==1||x==2)?0:(int)(ceil(x/2.0)-1))<<endl;;
            }
    return 0;
}