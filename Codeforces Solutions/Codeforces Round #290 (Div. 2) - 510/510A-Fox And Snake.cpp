/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 02, 2021 - 20:03:33
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int main(){
    fast();
    int h,w,c=0;
    cin>>h>>w;
    string hash="",after ="",before = "";
    loop0(i,w-1){
        hash+='#';after+='.';
    }
    hash+='#';before='#'+after;after+='#';
    loop0(i,h){
        if (i%2==0) {
            cout<<hash<<endl;
            c++;
        }else{
            if (c%2==1) cout<<after<<endl;
            else cout<<before<<endl;
        }
    }
    return 0;
}