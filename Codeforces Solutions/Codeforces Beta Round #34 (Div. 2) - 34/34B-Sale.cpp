#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int n,k,data,sum=0;
    vector <int> v;
    cin>>n>>k;
    for (int i=0;i<n;i++){
        cin>>data;
        v.push_back(-1*data);
    }
    sort(all(v),greater<int>());
    for (int i=0;i<k;i++){
        if (v[i]>=0)
            sum+=v[i];
    }
    cout<<sum;
    return 0;
}