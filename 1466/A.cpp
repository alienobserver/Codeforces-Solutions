#include <bits/stdc++.h>
using namespace std;
void solve(int a[], int n)
{
    bool rect[100] = {false};

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (rect[a[j] - a[i]] == false)
            {
                rect[a[j] - a[i]] = true;
                count++;
            }
        }
    }

    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[100];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solve(a, n);
    }
    return 0;
}