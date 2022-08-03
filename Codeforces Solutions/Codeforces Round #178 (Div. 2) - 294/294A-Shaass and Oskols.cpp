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
  int n ,x,y,m;
  cin>>n;
  int arr[n];
  loop0(i,n){
    cin>>arr[i];
  }
  cin>>m;
  loop0(j,m){
    cin>>x>>y;
      if (x==1){
        arr[x]+=arr[x-1]-y;
        arr[x-1]=0;
        }else if (x==n){
        arr[x-2]+=y-1;
        arr[x-1]=0;
        }
        else{
          arr[x]+=arr[x-1]-y;
          arr[x-2]+=y-1;
          arr[x-1]=0;
        }
   }
     loop0(l,n){
      cout<<arr[l]<<" ";
    }
    cout<<endl;
  }
  