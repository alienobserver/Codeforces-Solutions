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
    int q = 0;
    int b = 0;
    int e = 0;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(') b++;
        else if(s[i] == ')') e++;
        else if(s[i] == '?') q++;
    }
    if( s[0] == ')' || s[s.size()-1] == '(' || (b+q+e) % 2 != 0 ){
        cout << "NO" <<  endl;
        return;
    }
    else{
        cout << "YES" << endl;
        return;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}