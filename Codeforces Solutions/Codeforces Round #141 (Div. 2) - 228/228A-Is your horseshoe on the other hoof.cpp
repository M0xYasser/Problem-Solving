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
  int arr[4];
  loop0(i,4){
    cin>>arr[i];
  }
  sort(arr,arr+4);
  cout<<distance(unique(arr,arr+4),arr+4)<<endl;
  }
  