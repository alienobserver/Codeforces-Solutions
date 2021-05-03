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

long long MyCeil(long long a, long long b){
    return ((a+b-1)/b);
}

void solve(){
    long long n, m, a;
    cin >> n >> m >> a;
    cout << MyCeil (m,a) * MyCeil (n,a) << endl;
}

int main(){
    solve();
    return 0;
}