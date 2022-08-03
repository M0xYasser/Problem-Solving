/*
  Author : Mohamed Yasser
  userName : M0xYasser
  Date & Time : October 02, 2021 - 13:05:11
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
 int ctr[4];
int main(){
    fast();
    int n;
    cin>>n;
    int arr[n];
    loop0(i,n){
        cin>>arr[i];
        ctr[arr[i]]++;
    }
    int ans =(ctr[1]>0&&ctr[2]>0&&ctr[3]>0)? min ({ctr[1],ctr[2],ctr[3]}):0;
    cout<<ans<<endl;
    loop0(i,ans){
        int s1=-1,s2=-1,s3=-1;
        loop0(j,n){
            if (arr[j]==1&&s1==-1) {
                s1=j+1;
                arr[j]=0;
                }
            else if (arr[j]==2&&s2==-1) {
                s2=j+1;
                arr[j]=0;
                }
            else if (arr[j]==3&&s3==-1) {
                s3=j+1;
                arr[j]=0;
                }
        }
        cout<<s1<<" "<<s2<<" "<<s3<<endl;
    }
     return 0;
}