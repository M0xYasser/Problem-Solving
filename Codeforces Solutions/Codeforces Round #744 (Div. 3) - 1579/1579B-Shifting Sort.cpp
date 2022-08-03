#include <bits/stdc++.h>
using namespace std;
 void shift(long long arr[], long long l, long long r);
int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        string answers[50+5];
        long long u = 0;
        long long n, a[50+5], b[50 + 5], k = 0;
        cin >> n;
        for(long long i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b + 1, b + n + 1);
        for(int i = n; i >= 1; i--)
        {
            long long maximimum = -1e9 - 5, maxIndex;
            if(a[i] == b[i])
                continue;
            else
            {
                for(long long j = 1; j < i; j++)
                {
                    if(maximimum <= a[j])
                    {
                        maximimum = a[j];
                        maxIndex = j;
                    }
                }
                long long left = maxIndex, right = i;
                shift(a, left, right);
                answers[u] = to_string(left) + " " + to_string(right) + " 1\n";
                u++;
                k++;
            }
        }
        cout << k << endl;
        for(long long i = 0; i < u; i++)
        {
            cout << answers[i];
        }
     }
}
   void shift(long long arr[], long long l, long long r)
{
    long long lastelement;
    for(long long i = l; i < r; i++)
    {
        if(i == l)
            lastelement = arr[l];
        arr[i] = arr[i + 1];
    }
    arr[r] =  lastelement;
}