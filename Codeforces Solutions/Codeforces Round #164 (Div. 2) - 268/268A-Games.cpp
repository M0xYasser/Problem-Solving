#include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main()
{
    fast();
    int n,c=0;cin>>n;
    int team1[n],team2[n];
    for(int i=0 ;i<n;i++) {cin>>team1[i]>>team2[i];}
    for(int i=0 ;i<n;i++){
        for(int j=0 ;j<n;j++){
            if (team1[i]==team2[j])c++;
        }
    }
    cout<<c;
    return 0;
}