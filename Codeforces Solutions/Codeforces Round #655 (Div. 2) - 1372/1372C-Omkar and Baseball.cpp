#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n,l=-1,r=0;
        cin>>n;
        int arr[n];
        for (int j=0;j<n;j++){
            cin>>arr[j];
            if (j+1!=arr[j]&&l==-1) {
                l=j;
            }
            if (j+1!=arr[j]){
                r=j;
            }
        }
        bool flag = true; 
        if (is_sorted(arr,arr+n)) cout<<0<<endl;
        else{
            for (int j=l;j<=r;j++){
                if (j+1==arr[j]){
                 flag =false;
            }}
            if (flag) cout<<1<<endl;
            else cout<<2<<endl;
        }
            }
    return 0;
}