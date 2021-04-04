#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int n, k;
    string s;
    map<char, pair<int, int>> pos;
    int actives = 0;
    cin >> n >> k >> s;
    for (int i = 0; i < n; i++)
    {
        if (!pos[s[i]].first)
        {
            pos[s[i]].first = i + 1;
            pos[s[i]].second = i + 1;
        }
        else
        {
            pos[s[i]].second = i + 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (auto j = pos.begin(); j != pos.end(); j++)
        {
            if (j->second.first == i + 1)
            {
                actives++;
            }
            if (actives > k)
            {
                cout << "YES";
                j = pos.end()--;
                i = n-1;
                break;
            }
            if (j->second.second == i + 1)
            {
                actives--;
            }
        }
    }
    if(actives <= k) cout << "NO";
    return 0;
}