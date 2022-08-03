#include <iostream>
#include<cstring>
 #define loop(i,n) for (int i(0);i<n;i++)
#define el cout<<endl;
using namespace std;
 int main()
{
string s;
cin>>s;
if (islower(s[0])){
s[0]=toupper(s[0]);
}
cout<<s;el
    return 0;
}