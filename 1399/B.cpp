#include <bits/stdc++.h>
using namespace std;

void printv(long long arr[], long long n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << endl;
}

void equalize()
{
    long long n, minA, minB, k;
    long long count = 0;
    long long a[50];
    long long b[50];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            minA = a[i];
        else if (minA > a[i])
            minA = a[i];    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (i == 0)
            minB = b[i];
        else if (minB > b[i])
            minB = b[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > minA && b[i] > minB)
        {
            if (minA <= minB)
            {
                if (a[i] >= b[i])
                {
                    k = (b[i] - minA);
                    b[i] -= k;
                    a[i] -= k;
                    count += k;
                }
                else if (a[i] <= b[i])
                {
                    k = (a[i] - minA);
                    b[i] -= k;
                    a[i] -= k;
                    count += k;
                }
            }

            else if (minB <= minA)
            {
                if (b[i] >= a[i])
                {
                    k = (a[i] - minB);
                    b[i] -= k;
                    a[i] -= k;
                    count += k;
                }
                else if (a[i] >= b[i])
                {
                    k = (b[i] - minB);
                    b[i] -= k;
                    a[i] -= k;
                    count += k;
                }
            }
        }
        if (a[i] > minA && b[i] == minB)
        {
            count += (a[i] - minA);
            a[i] = minA;
        }
        if (b[i] > minB && a[i] == minA)
        {
            count += (b[i] - minB);
            b[i] = minB;
        }
    }

    cout << count << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
        equalize();
    return 0;
}