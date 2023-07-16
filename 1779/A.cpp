#include <bits/stdc++.h>

using namespace std;

#define MAXN 1000000000+10
#define ll long long


void solve(){
    int n;
    string s;
    int pos_LR = -1;
    int pos_RL = -1;
    cin >> n >> s;

    for(int i = 0; i < n; i++){
        if(pos_RL == -1 && s[i] == 'R') pos_RL = i;
        if(pos_LR == -1 && s[i] == 'L') pos_LR = i;

        if(pos_RL != -1 && s[i] == 'L'){
            cout << 0 << endl;
            return;
        }
        if(pos_LR != -1 && s[i] == 'R'){
            cout << i - pos_LR << endl;
            return;
        }
    }

    cout << -1 << endl;
}

int main(){
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


	ll t;
	cin >> t;
	while(t--){
		solve();
	}
}