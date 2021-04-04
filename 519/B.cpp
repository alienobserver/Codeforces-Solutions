#include <bits/stdc++.h>
using namespace std;

int arraySum(int a[], int n)  
{ 
    int initial_sum  = 0;  
    return accumulate(a, a+n, initial_sum); 
} 

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    int arr1[100000];
    int arr2[100000];
    int arr3[100000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < n-2; i++)
    {
        cin >> arr3[i];
    }
    cout << arraySum(arr1, n) - arraySum(arr2, n-1) << endl;
    cout << arraySum(arr2, n-1) - arraySum(arr3, n-2) << endl;    
    return 0;
}