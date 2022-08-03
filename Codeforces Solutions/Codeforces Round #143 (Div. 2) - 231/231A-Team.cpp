#include <iostream>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
 int n,p,v,t,s(0);
cin>>n;
loop0(i,n){
  cin>>p>>v>>t;
  (p+v+t>=2)?s++:s;
}
cout<<s<<endl;
} 