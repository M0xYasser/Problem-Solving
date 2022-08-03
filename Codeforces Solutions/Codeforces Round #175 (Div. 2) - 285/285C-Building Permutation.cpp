#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int n,data,x;
    vector <int> v;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>data;
        v.push_back(data);
    }
    sort(all(v));
    int number =1;
    long long sum=0;
    for (auto element : v){
        x=number-element;
        if (x<0) sum-=x;
        else sum+=x;
        number++;
    }
    cout<<sum;
    return 0;
}