#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    int k;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        arr.push_back(k);
    }
    for (auto i = (arr.begin()+1); i != (arr.end()-1); i++)
    {
        if(*(i-1) < *(i) && *(i) > *(i+1)){
            cout << "YES" << endl;
            cout << arr.size() - (arr.end() - (i-1)) + 1 << " " << arr.size() - (arr.end() - (i)) + 1 << " " << arr.size() - (arr.end() - (i+1)) + 1 << endl;
            break;
        }
        else if( i == (arr.end()-2)){
            cout << "NO" << endl;
            break;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}