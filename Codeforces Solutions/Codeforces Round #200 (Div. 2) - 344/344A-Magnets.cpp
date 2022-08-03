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
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int n,arr[100000];
  cin>>n;
  loop0(i,n){
    cin>>arr[i];
  }
  auto x = unique(arr,arr+n);
  cout<<distance(arr,x)<<endl;
} 