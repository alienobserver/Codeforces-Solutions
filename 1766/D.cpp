#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>  
#include <sstream> 
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define MAXN   10000000
#define ll long long
 
// stores smallest prime factor for every number
 int spf[MAXN];
 
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (int i=2; i<MAXN; i++)
 
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
 
    // separately marking spf for every even
    // number as 2
    for (int i=4; i<MAXN; i+=2)
        spf[i] = 2;
 
    for (int i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<MAXN; j+=i)
 
                // marking spf[j] if it is not
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
 
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step


void solve(){
    int x, y;
	int minim = INT_MAX;
	cin >> x >> y;
 
	if(abs(x-y) == 1){
		cout << -1 << endl;
		return;
	}

	if(__gcd(x, y) != 1){
		cout << 0 << endl;
		return;
	}

	int dif=y-x;


	while(dif!=1){
		minim = min( minim, (y/spf[dif] + 1)*spf[dif] - y);
		dif/=spf[dif];
	}

	cout << minim << endl;
	return;
}

int main(){
	cin.tie(0);
    ios_base::sync_with_stdio(false);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    sieve();
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}