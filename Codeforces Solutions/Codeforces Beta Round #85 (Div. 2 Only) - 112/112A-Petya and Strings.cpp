#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define b begin()
#define e end()
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  string s1,s2;
  int x;
  cin>>s1>>s2;
  transform(s1.b,s1.e,s1.b,::tolower);
  transform(s2.b,s2.e,s2.b,::tolower);
  if (s1.compare(s2)>0) cout<<1<<endl;
  if (s1.compare(s2)<0) cout<<-1<<endl;
  if (s1.compare(s2)==0) cout<<0<<endl;
} 