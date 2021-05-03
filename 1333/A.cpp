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
    int n, m;
    cin >> m >> n;
    char cell = 'B';
    for(int x = 0; x < m; x++){
        for(int y = 0; y < n; y++){
            if(x == 0 && y == 0){
                cout << 'W';
            }
            else{
                cout << 'B';
            }
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}