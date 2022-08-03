/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 03, 2021 - 05:00:10
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
 int main(){
    fast();
    string s;
    cin>>s;
    char arr[s.size()];
    int i=0;
    for (char c:s){
        if (c>='0'&&c<='9'){
            arr[i]=c;
            i++;
        }
    }
    sort(arr,arr+i);
    loop0(j,i){
        if (j==i-1) cout<<arr[j];
        else cout<<arr[j]<<"+";
            }
    return 0;
}