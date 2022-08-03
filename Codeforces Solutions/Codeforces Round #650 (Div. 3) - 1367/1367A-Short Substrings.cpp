#include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(01);i<n;i+=2)
#define pre(n)  fixed << setprecision(n)
#define all(v) v.begin(),v.end()
#define ts(t)  int t; cin>>t; while (t--)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
void rw (){
    #ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
 freopen("output.txt", "w", stdout);
    #endif
}
int main(){
    fast();rw();
    ts(t){
        string s;
        cin>>s;
        cout<<s[0];
        loop0(i,s.size()-1){
            if (s[i]==s[i+1]) cout<<s[i];
        }
        cout<<s.back();
        cout<<endl;
    }
    return 0;
}