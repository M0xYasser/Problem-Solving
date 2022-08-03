#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int n,n_data,data,cnt_0=0;
    bool flag=0;
    vector <int> v;
    cin>>n;
    while (n--)
    {
       cin>>n_data;
       while (n_data--)
       {
           cin>>data;
           if (data==1&&flag==0) flag=1;
           if (flag==1) v.push_back(data);
       }
       flag=0;
       for(auto it=v.rbegin();it!=v.rend();it++){
            if (*it==1&&flag==0) flag=1;
            if (flag==1&&*it==0) cnt_0++;
        }
       cout<<cnt_0<<endl;
       cnt_0=0;flag=0;v.clear();
    }
         return 0;
}