#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;cin>>t;
    while (t--)
    {
        bool flag =true;
        int n;cin>>n;
        string r1,r2;cin>>r1>>r2;
        for (int i=1;i<n;i++){
            if (r1[i]=='1'&&r2[i]=='1') {  
                flag =false;break;
                }
        }
        cout<<((flag)?"YES\n":"NO\n");
    }
        return 0;
}