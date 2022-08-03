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
 string cw="abcdefghijklmnopqrstuvwxyz",s;
 cin>>s;
 int x,y,sum(0);
 s.insert(0,"a");
loop0(i,s.size()-1){
   x=abs(distance(find(cw.b,cw.e,s[i]),find(cw.b,cw.e,s[i+1])));
   y=26-x;
  sum+=min(x,y);
 }
  cout<<sum<<endl;
    }
  