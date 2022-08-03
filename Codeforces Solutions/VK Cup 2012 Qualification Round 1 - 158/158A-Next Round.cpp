#include <iostream>
 using namespace std;
 int main()
{
    int k,n,a[50],c(0),aa;
    cin>> n>>k;
for (int i(0);i<n;i++){
    cin>> aa;
    a[i]=aa;
    }
for (int i(0);i<n;i++){
if (a[i]>=a[k-1] && a[i]>0){
    c++;
}
    }
 cout<<c<<endl;
    return 0;
}