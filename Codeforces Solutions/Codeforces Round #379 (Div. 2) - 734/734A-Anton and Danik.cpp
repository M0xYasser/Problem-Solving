#include <bits/stdc++.h>
 using namespace std;
 #define loop0(i,n) for(int i=0;i<n;i++)
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main(){
  init();
 int n,a(0),d(0);
cin>>n;
string s;
cin>>s;
for (char c : s){
  (c=='A')?a++:d++;
}
if (a>d) cout<<"Anton\n";
if (a<d) cout<<"Danik\n";
if (a==d) cout<<"Friendship\n";
} 