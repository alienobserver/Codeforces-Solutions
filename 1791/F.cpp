#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((long long)(x).size())
#define MAXN 2*100000 + 10

int sum_of_digit(int n, int val)
{
    if (n < 10) {
        val = val + n;
        return val;
    }
    return sum_of_digit(n / 10, (n % 10) + val);
}

void solve(){
    int n, q, k, l, r, x;
    set<int> s;

    cin >> n >> q;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] > 9) s.insert(i);
    }

    while(q--){
        cin >> k;

        if(k == 2){
            cin >> x;
            // cout << k << " " << x << endl;
            cout << arr[x - 1] << endl;
        }

        else{
            cin >> l >> r; l--; r--;
            int i = l;
            while(!s.empty()){
                auto it = s.lower_bound(i);
                if(it == s.end() || *it > r) break;

                arr[*it] = sum_of_digit(arr[*it], 0);

                int itt = *it;
                s.erase(it);
                if(arr[itt] > 9) s.insert(itt);

                i = itt + 1;
            }
        }
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