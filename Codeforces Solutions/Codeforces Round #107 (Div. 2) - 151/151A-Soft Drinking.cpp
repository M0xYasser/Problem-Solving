/* */
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
int main(){
    fast();rw();
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min({k*l/nl,c*d,p/np})/n;
    return 0;
}