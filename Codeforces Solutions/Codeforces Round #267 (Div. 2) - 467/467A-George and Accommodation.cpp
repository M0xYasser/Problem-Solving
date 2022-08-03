#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  int n,p,q,c(0);
  cin>>n;
  loop0(i,n){
    cin>>p>>q;
    (q-p>=2)?c++:c;
  }
  cout<<c<<endl;
  return 0;
  }
  