#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int)(x).size())

void solve(){
    int x;
    int expr;
    cin >> x;

    if( x % 2 == 1){
        cout << "-1" << endl;
        return;
    }

    expr =  (x / 2) ^ (3 * x / 2);

    if( x == expr ){
        cout << x / 2 << " " << 3 * x / 2 << endl;
        return;
    }

    cout << "-1" << endl;

}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}