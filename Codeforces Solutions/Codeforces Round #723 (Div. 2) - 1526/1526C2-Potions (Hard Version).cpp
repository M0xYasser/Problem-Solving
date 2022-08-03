#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    long long n,x,health=0;cin>>n;
    priority_queue <long long , vector<long long>, greater<long long>> s;
    for (long long i=0;i<n;i++){
        cin>>x;
        health+=x;
        s.push(x);
        if (health<0){
            health-=s.top();
            s.pop();
        }
     }
    cout<<s.size();
    return 0;
}