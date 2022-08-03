/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 30, 2021 - 15:56:12
*/
  #include <bits/stdc++.h>
using namespace std;
 #define loop0(i,n) for (int i(0);i<n;i++)
#define pre(n)  fixed << setprecision(n)
#define all(v) v.begin(),v.end()
#define ts(t)  int t; cin>>t; while (t--)
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
 int arr[27];
int main(){
    fast();
    string s;
    int ctr=0;
    getline(cin,s);
    for (char c:s){
        if (c<='z'&&c>='a'){
            arr[c-97]++;
        }
    }
    loop0(i,27) {
        if (arr[i]>0) ctr++;
    }
    cout<<ctr;
    return 0;
}