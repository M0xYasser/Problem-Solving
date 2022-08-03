#include <bits/stdc++.h>
using namespace std;
#define loop0(i,n) for(int i=0;i<n;i++)
#define com(n,m) fixed<< setprecision(n)<<m
void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
int main(){
  init();
  int t,n;
  cin>>t;
  loop0(i,t){
    cin>>n;
    double arr[n];
    loop0 (j,n){
cin>>arr[j];
    }
  auto z=*max_element(arr,arr+n)+((accumulate(arr,arr+n,0.0)-*max_element(arr,arr+n))/(n-1));
    cout<<com(9,z)<<endl;
  }
  return 0;
  }