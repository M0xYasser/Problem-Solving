#include <bits/stdc++.h>
using namespace std;
 int main()
{
long long k,n,w,s(0),t;
cin>>k>>n>>w;
for(int i(1);i<=w;i++){
    s+=i;
}
t=n-(k*s);
if (t>=0){
    cout<<0<<endl;
}else{
cout<<abs(t)<<endl;
 }
    return 0;
}