#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((long long)(x).size())
#define MAXN 2*100000 + 10
#define ll long long

long long f[MAXN][2];

void solve(){
    ll n, s;
    cin >> n >> s;

    vector<ll> arr(n+2);
    vector<pair<ll, ll>> xy(n+2);

    for(ll i = 1; i <= n; i++){
        cin >> arr[i];
        if(i==1||i==n) xy[i].first=xy[i].second=arr[i];
        else if(arr[i] <= s){
            xy[i].first = 0;
            xy[i].second = arr[i];   
        }
        else{
            xy[i].first = s;
            xy[i].second = arr[i] - xy[i].first;
        }
    }

	f[1][0]=f[1][1]=0;

	for(ll i=2; i<=n; i++) {
		f[i][0]=min(f[i-1][0]+xy[i-1].second * xy[i].first,f[i-1][1]+xy[i-1].first* xy[i].first);
		f[i][1]=min(f[i-1][0]+xy[i-1].second * xy[i].second,f[i-1][1]+xy[i-1].first * xy[i].second);
	}

	cout<<f[n][0]<<endl;

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