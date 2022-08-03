    #include <bits/stdc++.h>
    using namespace std;
              void fast (){
        ios::sync_with_stdio(false);
        cin.tie(0);
    }
         int main(){
        fast();
        int n,x,mx=0;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        for (int i=0;i<n-1;i++){
            mx=max(mx,arr[i]-x-arr[i+1]);
        }
        cout<<mx;
        return 0;
    }