#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>  
#include <sstream> 
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int gcd(long long a, long long b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}
 
int findGCD(long long arr[], long long n)
{
  long long result = arr[0];
  for (long long i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

void solve(){
	long long n;
	long long arr[100000];

	cin >> n;
	for(long long i = 0; i < n; i++){
		cin >> arr[i];
	}

	long long big_gcd = findGCD(arr, n);
	cout << arr[n-1] / big_gcd << endl; 
}

int main(){
	long long t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}