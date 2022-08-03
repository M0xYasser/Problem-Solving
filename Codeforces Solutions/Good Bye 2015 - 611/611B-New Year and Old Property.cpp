#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
    fast();
    long long a,b,c=0;
    cin>>a>>b;
    int x=log2(a),y=log2(b);
    for(int i=x;i<=y;i++){
        for(int j=0;j<i;j++){
            long long  z= (2LL<<i)-(1LL<<j)-1;
            if (z<=b&&z>=a) c++;
        }
    }
    cout<<c;
    return 0;
}