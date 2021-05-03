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
    long long a, b, n, s;
    cin >> a >> b >> n >> s;
    if(n * a >= s){
        if(floor(s / n) * n + b >= s){ 
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if(n * a + b >= s){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}