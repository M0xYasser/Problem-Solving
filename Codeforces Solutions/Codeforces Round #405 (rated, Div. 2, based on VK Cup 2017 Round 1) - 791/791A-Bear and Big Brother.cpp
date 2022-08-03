/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 16, 2021 - 21:00:14
*/
 #include <bits/stdc++.h>
using namespace std;
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int a,b,y(0);
    cin>>a>>b;
    while (a<=b)
    {
        a*=3;
        b*=2;
        y++;
    }
    cout<<y<<endl;
    return 0;
}