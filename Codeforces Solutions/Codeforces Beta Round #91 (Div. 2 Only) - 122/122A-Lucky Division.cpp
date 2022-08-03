/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 22, 2021 - 02:57:25
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
#define pre(n)  fixed << setprecision(n)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    string s;
    int c7=0,c4=0;
    cin>>s;
    for (char c:s){
        if (c=='7') c7++;
        else if (c=='4') c4++;
    }
    if ((c7>=1&&c4>=1&&c4+c7==s.size())||(stoi(s)%4==0||stoi(s)%7==0||stoi(s)%47==0||stoi(s)%74==0)||stoi(s)%474==0||stoi(s)%447==0||stoi(s)%477==0||stoi(s)%747==0||stoi(s)%744==0||stoi(s)%774==0)
        cout<<"YES";
    else cout<<"NO";
     return 0;
}