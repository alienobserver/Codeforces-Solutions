#include "bits/stdc++.h"
using namespace std;

void solve(){
    long long n;
    cin >> n;

    if(n % 2 == 0) cout << 1 << " " << n/2 << endl;
    else cout << -1 << endl;
}
 
int main( )
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	long long t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}