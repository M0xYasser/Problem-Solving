#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define all(v)  v.begin(),v.end()
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  int n;
  string s;
  cin>>n>>s;
  cout<<abs(count(all(s),'0')-count(all(s),'1'))<<endl;
  return 0;
  }
  