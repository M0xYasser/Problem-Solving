#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main()
{
    fast();
    int n,k,x,c=0;
    cin>>n>>k;
    for (int i=0;i<n;i++){
        cin>>x;
        if (k+x<=5)c++;
    }
    cout<<c/3;
    return 0;
}