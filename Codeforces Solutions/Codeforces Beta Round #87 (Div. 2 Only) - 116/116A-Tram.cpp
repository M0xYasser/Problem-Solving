#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main()
{
    fast();
    int n,sum=0;cin>>n;
    int x[n],y[n],mx[n]={0};
    for(int i=0 ;i<n;i++) {cin>>x[i]>>y[i];}
    for(int i=0 ;i<n;i++){
        sum+=y[i]-x[i];
        mx[i]=sum;
    }
    cout<<*max_element(mx,mx+n);
    return 0;
}