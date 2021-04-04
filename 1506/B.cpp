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
int nxt[200000 + 10][26];

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int flag;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            flag = i;
            ans++;
            break;
        }
    }
    int flag2;
    for (int i = s.size(); i >= 0; i--)
    {
        if (s[i] == '*')
        {
            s[i] = 'x';
            flag2 = i;
            if (flag != i)
                ans++;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'x' && (i + k) < s.size())
        {
            bool f = false;

            for (int j = i + k; j > i; --j)
            {
                // if (s[j] == '*' && flag2 > i + k)
                // {
                //     s[j] = 'x';
                //     ans++;
                //     j = i;
                // }
                if (s[j] == 'x')
                {
                    j = i;
                    f = true;
                }
                // else
                // {
                //     s[j] = 'x';
                //     ans++;
                //     j = i;
                // }
            }
            if (!f)
            {
                for (int j = i + k; j > i; --j)
                {
                    if (s[j] == '*' && flag2 > i + k)
                    {
                        s[j] = 'x';
                        ans++;
                        j = i;
                    }

                    // else
                    // {
                    //     s[j] = 'x';
                    //     ans++;
                    //     j = i;
                    // }
                }
            }
        }
    }
    cout << ans << endl;

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