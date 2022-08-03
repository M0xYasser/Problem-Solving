#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define com(n,m) fixed<< setprecision(n)<<m
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  double a,b,n,m,r=INT_MAX,c(0);
 cin>>n>>m;
 loop0(i,n){
     cin>>a>>b;
    r=min(a/b,r);
     }
cout <<com(8,r*m)<<endl;
  return 0;
  }