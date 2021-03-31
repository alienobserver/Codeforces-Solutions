#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n == 1) cout << 0 << endl;
    else if(n == 2) cout << 1 << endl;
    else if(n == 3) cout << 2 << endl;
    else if(n % 2 == 0) cout << 2 << endl;
    else if(n%2!=0) cout << 3 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    long long t, x;
    cin >> t;
    while (t--)
    {
        cin >> x;
        solve(x);
    }
    return 0;
}