#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((long long)(x).size())

void solve(){
    int n;
    cin >> n;


    if (n % 2 == 0) {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    
    int i = (n + 1) / 2;
    int k = n + 1;

    while(i <= n){
        cout << i << " " << k << endl;
        i++;
        k++;
    }

    i = 1;

    while (i < (n+1)/2){
        cout << i << " " << k << endl;
        i++;
        k++;  
    }
}

int main(){
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
}