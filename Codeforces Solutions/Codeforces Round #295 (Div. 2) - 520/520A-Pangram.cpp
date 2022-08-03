#include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
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
int ctr[26];
int main(){
    fast();rw();
    string s;
    int n,c=0;
    cin>>n>>s;
    loop0(i,n){
        if (islower(s[i])) ctr[s[i]-97]++;
        else ctr[s[i]-65]++;
    }
    loop0(i,26){
        if (ctr[i]>0) c++;
    }
    cout<<((c==26)?"YES":"NO")<<endl;
     return 0;
}