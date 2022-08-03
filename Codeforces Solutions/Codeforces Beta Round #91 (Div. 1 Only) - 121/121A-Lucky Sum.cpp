#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
vector <long long> num;
void generate (long long x){
    if (x>0) num.push_back(x);   
    if (x>1e9) return;
    generate(x*10+4);
    generate(x*10+7);
}
int main(){
    fast();
    long long l,r,sum=0;
    cin>>l>>r;
    generate(0);
    sort(all(num));
    for (auto x:num){
        // cout<<x<<" ";
        if (x<l) continue;
        if (l>r) break;
        if (r<x){
            sum+=x*(r-l+1);
        }else {sum+=x*(x-l+1);}
        // cout <<sum<<" ";
        l=x+1;
    }
    cout<<sum;
    return 0;
}