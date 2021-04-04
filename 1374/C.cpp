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
    string s;
    cin >> n >> s;
    int i = 0;
    int e = 0;
    int b = 0;
    for (int i = 0; i < n; i++){
        if(s[i] == '(') b++;
        else if(s[i] == ')' && b > 0) b--;
        else e++;
    }
    cout << max(e, b) << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}