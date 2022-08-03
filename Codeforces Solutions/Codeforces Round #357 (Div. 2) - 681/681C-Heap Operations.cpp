#include <bits/stdc++.h>
using namespace std;
 #define all(v) v.begin(),v.end()
 void fast (){
    ios::sync_with_stdio(false);
    cin.tie(0);
}
int main(){
    fast();
    int n,data;cin>>n;
    string s;
    vector <string> ans;
    multiset <int> heap;
    bool flag=0;
    while (n--)
    {
        cin>>s;
        if (s!="removeMin") cin>>data;
        if (s=="insert"){
            heap.insert(data);
            ans.push_back(s+" "+to_string(data)); 
        }else if (s=="removeMin"){
            if(heap.empty()){
                ans.push_back("insert 0");
                ans.push_back("removeMin");
            }else{
                heap.erase(heap.begin());
                ans.push_back("removeMin");
            }
                    }else if (s=="getMin"){
            while (data>*heap.begin()&&!heap.empty())
            {
                ans.push_back("removeMin");
                heap.erase(heap.begin());
            }
            if (*heap.begin()!=data||heap.empty()){
                ans.push_back("insert "+to_string(data));
                heap.insert(data);
            }
            ans.push_back(s+" "+to_string(data));
                    }
     }
    cout<<ans.size()<<endl;
    for (auto it : ans){
        cout<<it<<endl;
    }
    return 0;
}