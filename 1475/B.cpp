#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <queue>
#include <climits>
#include <cmath>
#include <utility>
#include <set>

using namespace std;

void solve(){
    int n;
    cin >> n;
    for (int i = 0; i*2020 <= n; i++) {
        if((n - i*2020) % 2021 == 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}