#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    multimap <int,int> a;
    multimap<int,int,greater<>> b;
    int n,x,data,j=1;cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
                if (x==1){
            cin>>data;
            a.insert({j,data});
            b.insert({data,j});
            j++;
        }else if (x==2){
            int s=a.begin()->second;
            int f=a.begin()->first;
            cout<<f<<" ";
            a.erase(f);
            b.erase(s);
        }else{
            int s=b.begin()->second;
            int f=b.begin()->first;
            cout<<s<<" ";
            auto it=b.find(f);
            b.erase(it);
            a.erase(s);
        }
     }
            return 0;
}
 