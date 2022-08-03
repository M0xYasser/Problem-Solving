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
  int a1,a2,a3,a4,a(0);
  string s;
  cin>>a1>>a2>>a3>>a4>>s;
  fore (c,s){
    if (c=='1') a+=a1;
    if (c=='2') a+=a2;
    if (c=='3') a+=a3;
    if (c=='4') a+=a4;
  }
cout <<a<<endl;
    }
  