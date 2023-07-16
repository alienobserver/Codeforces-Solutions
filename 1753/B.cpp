#include <bits/stdc++.h>

using namespace std;

#define MAXN 500000+5
#define ll long long


void solve(){
    int n, x;
    int a[MAXN];
    int minim = INT_MAX;
    unordered_map<int,int> counter;
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        minim = min(a[i], minim);
        counter[a[i]]++;
    }

    while(minim < x){
        if(counter[minim] % (minim + 1)){
            cout << "NO" << endl;
            return;
        }
        counter[minim+1] += counter[minim] / (minim + 1);
        minim++;
    }

    cout << "YES" << endl;
    return;
}

int main(){
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


	// ll t;
	// cin >> t;
	// while(t--){
		solve();
	// }
}