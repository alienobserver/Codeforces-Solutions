#include <iostream>
#include <algorithm>

using namespace std;

/* This programm solves 1498A problem from codeforces.com */

/* This function returns the sum of number's digits */
long long getSumOfDigits(long long num){
    long long rest;
    long long sum = 0;

    while(num > 0){
        rest = num % 10;    
        sum += rest;    
        num /= 10; 
    }

    return sum;
}

/* This function returns the GCD of a number and its digits sum */
long long gcdSum(long long num){
    long long sum = getSumOfDigits(num);
    return __gcd(num, sum);
}

/* This function tries to get the smallest GCD of num and its digits sum which is bigger than 1 */
void solve(){
    long long num;
    cin >> num;

    while (gcdSum(num) <= 1) {
        num++;
    }

    cout << num << endl;
}

/* This is the main function */
int main(){
    int test;
    cin >> test;

    while(test--){
        solve();
    }

    return 0;
}