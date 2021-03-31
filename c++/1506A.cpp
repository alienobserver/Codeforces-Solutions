#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n , m, x;
    cin >> n >> m >> x;
    if(n == 1 && m == 1 && x == 1) cout << 1 << endl;
    else{
        long long k;
        if(x %n > 0) k = (x%n-1)*m;
        else k = (n-1)*m - 1;
        cout << k + x/n + 1 << endl;
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}