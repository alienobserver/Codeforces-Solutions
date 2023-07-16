#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((int)(x).size())

void solve(){
    int n, k;
    cin >> n;

    vector<int> arr(n+1);

    for(int i = 0; i < n; i++){
        cin >> k;
        arr[k] = i;
    }

    int left = (n + 1) / 2;
    int right = (n + 2) / 2;

    while(left > 0 && (left == right || arr[left] < arr[left + 1] && arr[right] > arr[right - 1])){
        --left; 
        ++right;
    }

    cout << (n - right + left + 1) / 2 << endl;

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