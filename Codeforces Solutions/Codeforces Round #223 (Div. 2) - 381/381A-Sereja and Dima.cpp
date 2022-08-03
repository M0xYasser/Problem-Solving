#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define b begin()
#define e end()
#define fore(it ,c) for(auto it : c)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  int n,s(0),d(0),x;
  cin>>n;
  int left(0),right(n-1),arr[n];
  loop0(i,n){
    cin>>arr[i];
  }
  loop0(i,n){
    if (arr[left]>arr[right]){
      (i%2==0)?s+=arr[left]:d+=arr[left];
      left++;
    }else{
      (i%2==0)?s+=arr[right]:d+=arr[right];
      right--;
    }
  }
cout<<s<<" "<<d<<endl;
} 