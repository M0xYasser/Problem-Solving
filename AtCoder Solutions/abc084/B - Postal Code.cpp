#include <bits/stdc++.h>
using namespace std;

void fast (){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

int main(){
  fast();
  int A,B;
  string S;
  bool flag = 1;
  cin >> A>>B>>S;
  if ((S.size()!=A+B+1)||(S[A]!='-'))
    cout<<"No";
  else{
    for(int i = 0 ; i<S.size() ; i++){
      if (i==A) continue;
      if (!(S[i]>='0' && S[i]<='9'))
        flag = 0;
    }
    cout<< ((flag)?"Yes":"No");
  }
}
  