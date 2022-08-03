#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define b begin()
#define e end()
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  string s;
  int u(0),l(0);
  cin>>s;
  for (char c: s){
    (isupper(c))?u++:l++;
  }
  (l>=u)?transform(s.b,s.e,s.b,::tolower):transform(s.b,s.e,s.b,::toupper);
  cout<<s<<endl;
 } 