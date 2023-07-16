#include<bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
 
const long long mod = (long long) (1e9 + 7);
long long inv[55];
 
map<long long, long long> mp_coeff;
 
void gen(int id, vector<long long> f, long long power, long long cur_coeff)
{
      if (id == f.size())
      {
            mp_coeff[power] += cur_coeff;
            mp_coeff[power] %= mod;
      }
      else
      {
            gen(id + 1, f, power, cur_coeff);
            long long new_cur_coeff = cur_coeff * -1;
            new_cur_coeff %= mod;
            if (new_cur_coeff < 0)
                  new_cur_coeff += mod;
            gen(id + 1, f, power + f[id] + 1, new_cur_coeff);
      }
}
 
long long combination(long long n, long long r)
{
      if (r > n)
            return 0;
      if (n - r < r)
            r = n - r;
      n %= mod;
      long long ans = 1;
      for (int i = 0; i < r; i++)
      {
            ans = (ans * (n - i)) % mod;
            ans = (ans * inv[i + 1]) % mod;
      }
      return ans;
}
 
long long solve(int n, long long s, vector<long long> f)
{
      mp_coeff.clear();
      gen(0, f, 0, 1);
 
      long long ans = 0;
      for (map<long long, long long> :: iterator it = mp_coeff.begin(); it != mp_coeff.end(); it++)
      {
            long long power = it->first;
            long long coeff = it->second;
            long long rem = (s - power);
            if (rem >= 0)
            {
                  ans += combination(n + rem - 1, rem) * coeff;
                  ans %= mod;
            }
      }
 
      return ans;
}
 
long long modpow(long long a, long long b, long long mod)
{
      long long res = 1;
      while (b)
      {
            if (b & 1)
                  res = (res * a) % mod;
            a = (a * a) % mod;
            b >>= 1;
      }
      return res;
}
 
 
void pre()
{
      for (int i = 1; i <= 50; i++)
            inv[i] = modpow(i, mod - 2, mod);
}
 
int main()
{
      pre();
 
      int n;
      long long s;
 
      cin >> n >> s;
 
      vector<long long> f;
      for (int i = 0; i < n; i++)
      {
            long long t;
            cin >> t;
            f.push_back(t);
      }
 
      cout << solve(n, s, f) << endl;
 
      return 0;
}