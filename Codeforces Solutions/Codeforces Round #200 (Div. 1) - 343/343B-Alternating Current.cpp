#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    string s;cin>>s;
    stack <char> checker;
    checker.push(s[0]);
    for (int i=1;i<s.size();i++){
        if (!checker.empty()&&s[i]==checker.top()){
            checker.pop();
        }else {
            checker.push(s[i]);
        }
    }
    (checker.empty())?cout<<"Yes\n":cout<<"No\n";
    return 0;
}