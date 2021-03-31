#include <bits/stdc++.h>
using namespace std;

void solve(long long x, long long y)
{
    int n;
    if (x > y)
    {
        if((x-y) % 10 == 0) n = (x-y)/10;
        else n = floor((x-y)/10) + 1;
        cout << n << endl;
    }
    else if (y > x)
    {
        if((y-x) % 10 == 0) n = (y-x)/10;
        else n = floor((y-x)/10) + 1;       
        cout << n << endl;
    }
    else
        cout << 0 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    long long t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        solve(x, y);
    }
    return 0;
}