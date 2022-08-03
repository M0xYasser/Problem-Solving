#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int t;cin>>t;
    int arr[t],ce=0,co=0;
    for (int i=0;i<t;i++){
        cin>>arr[i];
        if (arr[i]%2==0) ce++;
        else co++;
    }
    sort(arr,arr+t);
    if (co-ce==0||abs(co-ce)==1) cout<<0<<endl;
    else{
        int sum=0,x=0;
            if (ce>co)  {
                for (int i=0;i<t;i++){
                    if (x==abs(ce-co)-1) break;
                    if (arr[i]%2==0) {
                        sum+=arr[i];
                        x++;
                    }
                }
            }else{
                for (int i=0;i<t;i++){
                    if (x==abs(ce-co)-1) break;
                    if (arr[i]%2!=0) {
                        sum+=arr[i];
                        x++;
                    }
                }
            }
             cout<<sum<<endl;
    }
    return 0;
}