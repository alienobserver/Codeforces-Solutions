#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>
using namespace std;
typedef long long ll;
const int INF = 2e9 + 100;
const int mod = 1e9 + 7;
string a;
string b;
int LCSubStr(string a, string b, int n, int m)
{
    int LCSuff[n + 1][m + 1];
    int result = 0;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (a[i - 1] == b[j - 1])
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

void solve()
{
    cin >> a >> b;
    int n = a.size();
    int m = b.size();
    //cout << LCSubStr(a, b, n, m) << endl;
    cout << n + m - 2*LCSubStr(a, b, n, m) << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}