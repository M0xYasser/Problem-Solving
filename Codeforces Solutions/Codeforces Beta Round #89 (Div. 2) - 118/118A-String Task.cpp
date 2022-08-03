#include <iostream>
#include<algorithm>
#define lop(i,n,s) for (int i(s);i<n;i++)
using namespace std;
 void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}
  int main()
{
 init();
string s,ss;
cin>>s;
transform(s.begin(),s.end(),s.begin(),::tolower);
for (char c : s){
    if (c!='a'&&c!='o'&&c!='y'&&c!='e'&&c!='u'&&c!='i') {
        ss.append(".");ss.append(1,c);
        }
 }
cout<<ss<<endl;
 return 0;
}