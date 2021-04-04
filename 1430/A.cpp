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
    for(int i = 0; i*3 <= n; i++){
        for(int j = 0; j*5 <= n; j++){
            if((n - i*3 - j*5) % 7 == 0){
                cout << i << " " << j << " " << (n - i*3 - j*5) / 7 << endl;
                return;
            }
        }
    }
    cout << "-1" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}