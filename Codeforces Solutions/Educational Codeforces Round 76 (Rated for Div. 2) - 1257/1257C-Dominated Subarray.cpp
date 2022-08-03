#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int n,t;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>t;
        vector <int> v(t);
        for (int j=0;j<t;j++){
            cin>>v[j];
        }
        int mn=1e9;
        vector <int> last (t+1,-1);
        for (int j=0;j<t;j++){
            if (last [v[j]]!=-1)
                mn=min(mn,j-last[v[j]]+1);
            last[v[j]]=j;
        }
        if (mn==1e9) cout<<-1<<endl;
        else cout<<mn<<endl;
    }
        return 0;
}