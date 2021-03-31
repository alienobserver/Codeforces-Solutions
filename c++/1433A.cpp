#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int ans = ((n % 10) - 1) * 10;
    if(n < 10) ans += 1;
    else if(n < 100) ans += 3;
    else if(n < 1000) ans += 6;
    else if(n < 10000) ans += 10;
    cout << ans << endl;
}

int main(){
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        count(n);
    }
    return 0;
}