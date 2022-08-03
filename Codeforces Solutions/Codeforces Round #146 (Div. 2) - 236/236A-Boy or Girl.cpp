#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    string s;
    cin>>s;
    set <char> pureS;
    for (char c:s){
        pureS.insert(c);
    }
    cout<< ((pureS.size()%2==0)?"CHAT WITH HER!":"IGNORE HIM!");
    return 0;
}