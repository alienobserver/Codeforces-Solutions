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
    int x; cin >> x;
    if (x < 10) cout << x << "\n";
    else if (x > 45) cout << -1 << "\n";
    else {
        vector<int> ans;
        int sum = 0;
        int last = 9;
        while (sum < x && last > 0) {
            int ele = min(x - sum, last);
            ans.push_back(ele);
            sum += last;
            last--;
        }
        reverse(ans.begin(), ans.end());
        for (int i : ans) {
            cout << i;
        }
        cout << "\n";

    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}