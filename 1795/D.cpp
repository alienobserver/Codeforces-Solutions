#include <iostream>
#include <list>
#include <bits/stdc++.h>
using namespace std;
#define sz(x) ((long long)(x).size())
#define MAXN 2*100000 + 10
#define ll long long

unsigned long long power(unsigned long long x, 
                                  unsigned long long y, unsigned long long p)
{
    unsigned long long res = 1;
  
    x = x % p;
  
    while (y > 0) 
    {
      
        if (y & 1)
            res = (res * x) % p;
  
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
  
unsigned long long modInverse(unsigned long long n,  
                                            unsigned long long p)
{
    return power(n, p - 2, p);
}
  

unsigned long long nCrModPFermat(unsigned long long n,
                                 unsigned long long r, unsigned long long p)
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
  

    unsigned long long fac[n + 1];
    fac[0] = 1;
    for (unsigned long long i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % p;
  
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}

unsigned long long countUnique(vector<unsigned long long> nums)
{
    sort(nums.begin(), nums.end());

    if(nums[2] == nums[1] && nums[1] == nums[0]) return 3;
    else if(nums[0] == nums[1]) return 2;
    else return 1;
}

unsigned long long factorial(unsigned long long n)
{
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

void solve(){
    unsigned long long n; cin >> n;
    vector<unsigned long long> nums(3);
    unsigned long long countGlob = 1;

    for(unsigned long long i = 0; i < n; i++){
        if((i+1) % 3 == 0){
            cin >> nums[i % 3];
            countGlob *= countUnique(nums);
            countGlob %= 998244353;
        }
        else{
            cin >> nums[i % 3];
        }
    }

    // cout << countGlob << " " << nCrModPFermat(n/3, n/6, 998244353) << " " << endl;
    cout << (nCrModPFermat(n/3, n/6, 998244353) * countGlob) % 998244353 << endl;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	// long long t;
	// cin >> t;
	// while(t--){
		solve();
	// }
}