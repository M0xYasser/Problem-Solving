#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define fore(it ,c) for(auto it : c)
#define b begin()
#define e end()
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  string s , t;
  int n(1),x;
  cin>>s>>t;
  x=t.size();
loop0(i,x){
  loop0(j,x){
    if (s[i]==t[j]){
      n++;
      t[j]=' ';
      break;
    }else {
    t[j]=' ';}
  }
}
cout<<n<<endl;
    }
  