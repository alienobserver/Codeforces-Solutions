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

bool check(int r, int g, int b, int w){
    if(r%2 + g%2 + b%2 + w%2 > 1) return false;
    else return true;
}

void solve(){
    int r, g, b, w;
    cin >> r >> g >> b >> w;
    if(check(r, g, b, w)) cout << "YES" << endl;
    else if( r > 0 && g > 0 && b > 0 && check(r-1, g-1, b-1, w+1)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}