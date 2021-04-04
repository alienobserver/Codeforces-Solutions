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
    string s;
    int count0 = 0;
    int count1 = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0'){
            count0++;
        }
        else if(s[i] == '1'){
            count1++;
        }
    }
    if(min(count0, count1) % 2 == 0) cout << "NET" << endl;
    else cout << "DA" << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}