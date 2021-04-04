#include <iostream>
using namespace std;
 
// Two pointer technique based solution to find
// if there is a pair in A[0..N-1] with a given sum.
int isPairSum(unsigned long long A[], unsigned long long N, unsigned long long X)
{
    // represents first pointer
    unsigned long long i = 0;
 
    // represents second pointer
    unsigned long long j = N - 1;
 
    while (i <= j) {
 
        // If we find a pair
        if (A[i] + A[j] == X){
            return 1;
        }
        // If sum of elements at current
        // pointers is less, we move towards
        // higher values by doing i++
        else if (A[i] + A[j] < X)
            i++;
 
        // If sum of elements at current
        // pointers is more, we move towards
        // lower values by doing j--
        else
            j--;
    }
    return 0;
}

void findCubes(){
    unsigned long long x;
    cin >> x;
    unsigned long long arr[10000+1];
    for (unsigned long long i = 0; i < 10000+1; i++) {
        arr[i] = (i+1)*(i+1)*(i+1);
    }
    unsigned long long arrSize = 10000+1;
    if(isPairSum(arr, arrSize, x) && x != 1 && x != 0){
        cout << "YES" << endl;
        return;
    }
    else cout << "NO" << endl;
}
 
// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--) {
        findCubes();
    }
    return 0;
}