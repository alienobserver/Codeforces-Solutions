#include <bits/stdc++.h>
using namespace std;

void countOfOperations(long long x, long long y, long long k)
{
    long long s = k * y + k - 1;
    cout << ((y + 1) * k - 1 + x - 2) / (x - 1) + k << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, k;
        cin >> x >> y >> k;
        countOfOperations(x, y, k);
    }
    return 0;
}