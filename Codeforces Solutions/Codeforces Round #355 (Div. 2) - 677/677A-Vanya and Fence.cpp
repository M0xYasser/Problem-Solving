#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main()
{
    fast();
    int n,h,x,c=0;cin>>n>>h;
    for(int i=0 ;i<n;i++) {cin>>x;
    if (x>h){
        c+=2;
    }else{
        c++;
    }
    }
    cout<<c;
    return 0;
}