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
        int c(1);
        string s;cin>>s;
        sort(s.begin(),s.end());
        for (int i=0;i<s.size()-1;i++){
            if (s[i]==(char)(s[i+1]-1)) c++;
        }
        cout<<((c==s.size())?"Yes\n":"No\n");
    }
        return 0;
}