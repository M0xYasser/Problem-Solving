#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(long long i=0;i<n;i++)
#define fore(it ,c) for(auto it : c)
#define b begin()
#define e end()
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  long long n,bb,d,x,s=0,dd=0;
  cin>>n >>bb>>d;
  loop0(i,n){
    cin>>x;
    (x>bb)?s:s+=x;
    if (s>d){
      dd++;
      s=0;}
  }
    cout<<dd<<endl;
    }
  