#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define b begin()
#define e end()
#define fore(it ,c) for(auto it : c)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  long long t,n,nm;
  cin>>t;
  loop0(i,t){
    cin>>n;
    (n%2==0)?n:n++;
    (n<=6)?cout<<15:cout<<n*5/2;
    cout<<endl;
   }
} 