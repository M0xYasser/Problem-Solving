#include <bits/stdc++.h>
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main(){
  init();
 int n;
string s;
cin>>n;
bool on =true;
 while (on){
  n++;
  s=to_string(n);
  if (s[0]==s[1]||s[0]==s[2]||s[0]==s[3]||s[1]==s[2]||s[1]==s[3]||s[2]==s[3]){
    on =true;
  }else{
    on=false;
  }
}
cout <<n<<endl;
} 