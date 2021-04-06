/*
Two Party Animals have decided to gift an array of elements of size N to each other for the party . They have decided to maximize the fun at the party using some function G on the gifts.

A function G is defined as :

         G (array , L ,R )  =    bitwise OR of array  elements from L  to R  

        where L is greater than  equal to 0 and R is less than N 
The fun at the party is the MAX of ( G(array1,L,R) + G(array2,L,R) ) for all possible value of L and R.

Input:
First line will contain N, size of arrays
Second line will contain array A
Third line will contain array B.
Output:
Value of Fun

Constraints
1≤N≤1000
0≤A[i],B[i]≤109
Sample Input:
8

1 2 4 8 16 32 64 128

1 2 4 8 16 32 64 128

Sample Output:
510
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n], brr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0;i < n; i++)
    {
        cin >> brr[i];
    }
    int ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++)
    {
        ans1 |= arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        ans2 |= brr[i];
    }
    cout << (ans1 + ans2) << endl;
}

// tc o(N)
// sc o(1)
