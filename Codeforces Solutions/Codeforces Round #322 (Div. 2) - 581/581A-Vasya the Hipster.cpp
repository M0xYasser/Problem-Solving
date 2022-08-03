#include <bits/stdc++.h>
using namespace std;
  void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  int a,b;
  cin>>a>>b;
  cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2<<endl;
  return 0;
  }
  