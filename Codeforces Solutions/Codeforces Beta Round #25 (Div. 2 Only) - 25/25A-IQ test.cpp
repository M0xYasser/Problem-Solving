/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 09:39:17
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
    int n,x,ce=0,co=0,e,o;
    cin>>n;
    loop0(i,n){
        cin>>x;
        if (x%2==0){
            ce++;
            e=i+1;
        }else{
            co++;
            o=i+1;
        }
    }
    cout<<((ce==1)?e:o);
    return 0;
}