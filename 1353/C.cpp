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
    long long n;
    cin >> n;
    long long ans = 0;
    for(long long i = 3; i <=n; i+=2){
        ans += (2*i + 2*(i-2)) * (i/2);
    }
    cout << ans << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}