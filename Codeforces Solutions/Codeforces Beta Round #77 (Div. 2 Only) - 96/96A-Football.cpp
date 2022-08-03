#include <bits/stdc++.h>
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main(){
  init();
   string s;
  cin>>s;
  bool t=false;
  int c1=0,c0=0;
  for (char c:s){
if (c=='1'){
  c1++;
  c0=0;
}else{
  c0++;
  c1=0;
}
    if (c0>=7||c1>=7){
      t=true;
    }
  }
  cout<<(t?"YES":"NO")<<endl;
} 