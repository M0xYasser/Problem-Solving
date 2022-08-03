#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define fore(it ,c) for(auto it : c)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
   int c(0),h(0),p[100000],n;
  cin>>n;
  loop0(i,n){
    cin>>p[i];
  }
  loop0(j,n){
    if (p[j]>=1)h+=p[j];
    else {
      (h>0)?h+=p[j]:c++;
    }
      }
  cout<<c<<endl;
    }
  