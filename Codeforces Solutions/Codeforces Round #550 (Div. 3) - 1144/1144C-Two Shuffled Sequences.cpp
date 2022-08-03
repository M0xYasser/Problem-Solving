#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int freq[200005]={0};
int main(){
    fast();
    int t;cin>>t;
    int arr[t];
    vector <int> v,v2;
    bool flag = true;
    for (long long i=0;i<t;i++){
        cin>>arr[i];
        freq[arr[i]]++;
        if (freq[arr[i]]==1) v.push_back(arr[i]);
        if (freq[arr[i]]==2) v2.push_back(arr[i]);
        if (freq[arr[i]]==3) flag=false;
    }
    if (flag){
        cout<<"YES\n"<<v2.size()<<endl;;
        sort(v2.begin(),v2.end());
        for (auto x:v2) cout<<x<<" ";
        cout<<endl<<v.size()<<endl;
        sort(v.begin(),v.end(),greater <int> ());
        for (auto x:v) cout<<x<<" ";
        cout<<endl;
    }else{
        cout<<"NO\n";
    }
        return 0;
}