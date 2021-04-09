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
    float n, m, k;
    cin >> n >> m >> k;

    if(n/k > m){
        cout << m << endl;
    }
    else{
        cout << (n/k) - ceil((m - n/k) / (k-1)) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}