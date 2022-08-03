#include <bits/stdc++.h>
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main()
{
  init();
int n,t,k,c(0);
string s,ss;
cin>>t;
for (int i=0;i<t;i++){
  c=0;
  cin>>n;
  cin>>s;
  ss=s;
  sort (s.begin(),s.end());
  for (int j=0;j<n;j++){
    if (s[j]==ss[j]){
      c++;
    }
  }
cout<<(n-c)<<endl;
}
   return 0;
}