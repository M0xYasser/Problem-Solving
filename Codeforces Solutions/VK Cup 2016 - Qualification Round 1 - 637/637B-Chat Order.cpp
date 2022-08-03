#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    map <string,int> mp;
    map <int,string,greater<>> mp2;
    string s;
    int n;cin>>n;
    for (int i=0;i<n;i++){
        cin>>s;
        mp[s]=i;
    }
    for (auto it:mp){
        mp2[it.second]=it.first;
    }
    for (auto it:mp2) cout<<it.second<<endl;
    return 0;
}