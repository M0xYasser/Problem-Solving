#include <bits/stdc++.h>
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main(){
  init();
 int n,z;
cin>>n>>z;
 for (int i=0;i<z;i++){
  (n%10==0)?n/=10:n-=1;
}
 cout<<n<<endl;
} 