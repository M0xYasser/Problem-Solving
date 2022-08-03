#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int t;cin>>t;
    while(t--){
       int a,b,c;cin>>a>>b>>c;
       string s1="",s2="",s3="";
                    for (int i=0;i<c;i++){
            s1+=(char) (97+i);
        }
        for (int i=0;i<b;i++){
            s2+=s1[i%c];
        }
        for (int i=0;i<a;i++){
            s3+=s2[i%b];
        }
        cout<<s3;
        cout<<endl;
    }
    return 0;
}