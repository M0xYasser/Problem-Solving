#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int n,k,data;
    vector <int> v;
    cin>>n>>k;
    for (int i=0;i<k;i++){
        cin>>data;v.push_back(data);
    }
    sort(all(v));
    int mn=1e9,last=n-1;
    for (int first=0;first<k;first++){
        if (v[last]-v[first]>=0)
            mn=min(mn,v[last]-v[first]);
        last++;
        // cout<<mn<<endl;
    }
    cout<<mn;
    return 0;
}