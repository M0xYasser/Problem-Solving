/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : September 23, 2021 - 21:43:08
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
    int n,sum=0,cv=0,c=1;
    cin>>n;
    int arr[n];
    loop0(i,n){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr, arr + n,greater<int>());
    loop0(i,n){
        cv+=arr[i];
        if (cv>sum/2.0) break;
        else c++;
    }
    cout<<c;
    cv=0;
    sum=0;
    c=1;
     return 0;
}