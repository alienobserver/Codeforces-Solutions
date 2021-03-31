#include <bits/stdc++.h>
using namespace std;

int Move(int x, int y)
{
    int moves = 2 * max(x, y) - 1;
    if (x == y) moves++;
    cout << moves << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    int x;
    int y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        Move(x, y);
    }
    return 0;
}