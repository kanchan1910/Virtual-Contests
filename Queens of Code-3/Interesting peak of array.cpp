/*
Given an integer array A of size N.

You need to check that whether there exist a element which is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it.

If it exists print the element else print 0

NOTE:

Do not consider the corner elements i.e A[0] and A[N-1] as the answer.

Input Format

First line contains an integer N, size of the array Next line contains N space separated integers

Constraints

3 <= N <= 10^6

1 <= A[i] <= 10^9

Output Format

Print interesting peak value if there exist a element that is strictly greater than all the elements on left of it and strictly smaller than all the elements on right of it else print 0

Sample Input 0

9
5 1 4 3 6 8 10 7 9
Sample Output 0

6
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
    int left[n], right[n];
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    for(int i = 1; i < n - 1; i++)
    {
        left[i] = max(left[i - 1], arr[i - 1]);
    }
    for(int i = n - 2; i > 0; i--)
    {
        right[i] = min(right[i + 1], arr[i + 1]);
    }
    int ans = 0;
    for(int i = 1; i < n - 1; i++)
    {
        if(arr[i] > left[i] && arr[i] < right[i])
        {
            ans = arr[i];
        }
    }
    cout << ans << endl;
}
// nice problem
// tc o(n)
// sc o(n)
