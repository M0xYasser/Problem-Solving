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
  int w,y,mx;
  string prob[7]={"0/1","1/6","1/3","1/2","2/3","5/6","1/1"};
  cin>>w>>y;
  mx=7-max(w,y);
  cout<<prob[mx]<<endl;
  }
  