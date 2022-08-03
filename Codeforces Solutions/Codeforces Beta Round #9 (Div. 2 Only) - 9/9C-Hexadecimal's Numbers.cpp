#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int n,c;
void solve (int x){
    if (x>n) return ;
    else c++;
    solve (x*10);
    solve (x*10+1);
}
int main(){
    fast();
    cin>>n;
    solve(1);
    cout<<c;
    return 0;
}