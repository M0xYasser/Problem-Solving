#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
int n,arr[100];
cin>>n;
loop0(i,n){
  cin>>arr[i];
}
sort(arr,arr+n);
loop0(j,n){
  cout<<arr[j]<<" ";
}
cout<<endl;
} 