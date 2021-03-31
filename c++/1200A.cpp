#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    const int n = 10;
    bitset<n> hotel;
    int len;
    string s;
    cin >> len;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
        {
            for (int k = n - 1; k >= 0; k--)
            {
                if (hotel[k] == 0)
                {
                    hotel[k] = 1;
                    break;
                }
            }
        }
        else if (s[i] == 'R')
        {
            for (int k = 0; k < n; k++)
            {
                if (hotel[k] == 0)
                {
                    hotel[k] = 1;
                    break;
                }
            }
        }
        else if (s[i] >= 48 && s[i] <= 57)
        {
            hotel[(n - 1) - (s[i] - '0')] = 0;
        }
    }
    cout << hotel << endl;
    return 0;
}