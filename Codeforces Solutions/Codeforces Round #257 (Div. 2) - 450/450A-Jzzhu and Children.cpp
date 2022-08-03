#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    vector <int> v;
    int m,n,x,ans;cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(ceil((float)x/(float)m));
    }
    reverse(v.begin(),v.end());
    cout<<v.end()-max_element(v.begin(),v.end());
     return 0;
}