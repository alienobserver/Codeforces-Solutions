#include <ios>
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
#include <iomanip>

using namespace std;

void solve(){
    double n, k;
    cin >> n >> k;
    cout << setprecision(15);
    if(k/n > 1){
        cout << ceil(k/n) << endl;
    }
    else{
        k = ceil(n/k) * k;
        cout << ceil(k/n) << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}