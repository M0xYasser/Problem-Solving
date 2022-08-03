#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        long long arr[n],sum[n];
        for (int i=n-1;i>=0;i--){
            cin>>arr[i];
        }
        partial_sum(arr,arr+n,sum);
        cout<<*max_element(sum,sum+n)<<endl;
    }
        return 0;
}