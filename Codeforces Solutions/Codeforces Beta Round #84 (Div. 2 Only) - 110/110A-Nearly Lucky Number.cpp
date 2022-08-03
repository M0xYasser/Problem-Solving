/* */
 #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
#define pre(n)  fixed << setprecision(n)
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
    string s;
    int c7=0,c4=0;
    cin>>s;
    for (char c:s){
        if (c=='7') c7++;
        else if (c=='4') c4++;
    }
    if (c7+c4==7||c7+c4==4)
        cout<<"YES";
    else cout<<"NO";
     return 0;
}