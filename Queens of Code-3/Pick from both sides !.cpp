/*
Given an integer array A of size N.

You can pick B elements from either left or right end of the array A to get maximum sum.

Find and return this maximum possible sum.

NOTE: Suppose B = 4 and array A contains 10 elements then:

You can pick first four elements or can pick last four elements or can pick 1 from front and 3 from back etc . you need to return the maximum possible sum of elements you can pick.

Input Format

First argument is N size of the array

Next line contains N space separated integers of array A.

Next line contains integer B.

Constraints

1 <= N <= 10^6

1 <= B <= N

-10^9 <= A[i] <= 10^9

Output Format

Print an integer denoting the maximum possible sum of elements you picked.

Sample Input 0

5
5 -2 3 1 2
3
Sample Output 0

8

*/
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int b; 
    cin >> b;
    int sum = 0;
    int ans = 0;
    for(int i = 0; i < b; i++)
    {
        sum += arr[i];
    }
   ans = sum;
    for(int i = 0; i < b; i++)
    {
        sum -= arr[b - i - 1];
        sum += arr[n - i - 1];
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
// nice problem
// tc o(n)
// sc o(1)
