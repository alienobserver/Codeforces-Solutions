#include "bits/stdc++.h"
using namespace std;
 
#define MAXN  1000000+10
 
vector<int> factors;
long long add = 1;
map <long long, long long> p;

bool compare(long long i, long long j)
{
    return (p[i] < p[j]);
}

void primeFactors(int n)
{
    int c=2;
    while(n>1)
    {
        if(n%c==0){
            if(factors.size() > 0){
                if(factors[factors.size()-1] != c){
                    factors.push_back(c);
                    add *= c;
                }
            }
            else{
                factors.push_back(c);
                add *= c;


            }
            p[c]++;
            n/=c;
        }
        else if (c*c > n){
            factors.push_back(n);
            p[n]++;
            add*=n;
            return;
        }
        else c++;
    }
}

void solve(){
    long long n;
    long long count = 0;
    long long sub = 0;
    cin >> n;

    p.clear();
    add = 1;
    factors.clear();

    primeFactors(n);

    sort(factors.begin(), factors.end(), compare);


    for (long long i=0; i<factors.size(); i++){
        // cout << factors[i] << " " << p[factors[i]] << endl;
        // cout << "INFO: " << add << " " << sub << " " << count << endl;

        count += add * (p[factors[i]] - sub);
        sub = p[factors[i]];
        add /= factors[i];

    }

    cout << count << endl;
}
 
int main( )
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	long long t;
	cin >> t;
	while(t--){
		solve();
	}

    return 0;
}