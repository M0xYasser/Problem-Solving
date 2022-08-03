#include <bits/stdc++.h>
using namespace std;
  void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int t;cin>>t;
    while(t--){
        string arr[9];
        for(int i=0;i<=8;i++){
            cin>>arr[i];
                }
        arr[0][0]=arr[0][1];
        arr[1][3]=arr[1][4];
        arr[2][6]=arr[2][7];
        arr[3][1]=arr[3][2];
        arr[4][4]=arr[4][5];
        arr[5][7]=arr[5][8];
        arr[6][2]=arr[6][3];
        arr[7][5]=arr[7][6];
        arr[8][8]=arr[8][7];
        for(int i=0;i<=8;i++){
            for(int j=0;j<=8;j++){
            cout<<arr[i][j];}
            cout<<endl;
                }
            }
    return 0;
}