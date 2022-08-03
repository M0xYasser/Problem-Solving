#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int n,sum=0,data;
    cin>>n;
    while (n--)
    {
        cin>>data;
        if (data<0) sum-=data;
        else sum+=data;
    }
    cout<<sum;
        return 0;
}