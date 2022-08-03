#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main()
{
    fast();
    int a,c=0;
    cin>>a;
    int x=ceil(log2(a));
    for(int j=0;j<=x;j++){
            if (a&(1<<j)) c++;
        }
        cout<<c;
    return 0;
}