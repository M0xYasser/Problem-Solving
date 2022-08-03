/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 16, 2021 - 21:06:57
*/
 #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for(int i=0; i<n ; i++)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
  int main(){
    fast();
    int n;
    cin>>n;
    string s;
    loop0(i,n){
        cin>>s;
        if (s.size()<=10){
            cout<< s<<endl;
        }else{
            cout<<s.front()<<s.size()-2<<s.back()<<endl;
        }
    }
    return 0;
}