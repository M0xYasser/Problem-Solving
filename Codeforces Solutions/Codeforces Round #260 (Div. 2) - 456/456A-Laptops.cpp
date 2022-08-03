#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  //freopen("input1.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  int n,a,b;
  bool x=false;
  cin>>n;
  loop0(i,n){
    cin>>a>>b;
    (b>a)?x=true:x;
  }
  cout<<( (x)?"Happy Alex\n":"Poor Alex\n");
  return 0;
  }