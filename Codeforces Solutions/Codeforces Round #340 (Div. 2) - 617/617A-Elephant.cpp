#include <bits/stdc++.h>
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main(){
  init();
 int n,c(0);
cin>>n;
for (int i=n;i>0;i-=5){
  c++;
}
cout<<c<<endl;
} 