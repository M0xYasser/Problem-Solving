#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        cout<<(a^b)<<endl;
    }
    return 0;
}