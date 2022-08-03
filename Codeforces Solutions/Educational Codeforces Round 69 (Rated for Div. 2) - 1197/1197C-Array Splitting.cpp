#include <bits/stdc++.h>
using namespace std;
 int n, k, a[300000 + 5], d[300000 + 5] = {}, answer = 0;
 int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i < n; i++)
    {
        if(i != 0)
        {
            d[i] = a[i] - a[i - 1];
            answer += d[i];
        }
    }
    sort(d + 1, d + n);
    reverse(d + 1, d + n);
    for(int i = 1; i < k; i++)
    {
        answer -= d[i];
    }
    cout << answer;
 }