#include <bits/stdc++.h>
using namespace std;

void fast (){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
  fast();
  long long a,b,c,d,x,y,z,w;
  cin >>a>>b>>c>>d;
  x=a*c;y=a*d;z=b*c;w=b*d;
  cout<<max({x,y,z,w})<<endl;
}
  