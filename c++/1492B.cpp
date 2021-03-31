#include <bits/stdc++.h>
using namespace std;
int powMe(int x, int y)
{
	int sum = 1;
	for (int i = 0; i < y; i++)
	{
		sum *= x;
	}
	return sum;
}

void solve()
{
	int n;
	int summ = 0;
	int p[100000 + 1];
	set<int> s;
	int sorted[100000 + 1];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> p[i];
		sorted[p[i]] = i;
	}
	int k = n;
	
	 int mx;
	 int index;
	for (int i = n; i >= 1; i--)
	{
		if (!s.count(i) && k!=0)
			{
				mx = i;
				index = sorted[mx];
				for (int j = index; j < k; j++)
				{
					s.insert(p[j]);
					cout << p[j] << " ";
				}
				k=index;
			}
		if(k==0)
		{
			cout<<endl;
			return;
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}