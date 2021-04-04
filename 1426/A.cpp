#include<bits/stdc++.h>
using namespace std;

void solve(int n, int x){
    if ( n <= 2) cout << 1 << endl;
    else {
        cout << ceil((n-3)/x) + 2 << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        solve(n, x);
    }
    return 0;
}