/*Given an integer array A of size N. You need to count the number of special elements in the given array.

A element is special if removal of that element makes the array balanced.

Array will be balanced if sum of even index element equal to sum of odd index element.

Input Format

First line contains an integer N, the size of the array

Next line contains N space separated integers

Constraints

1 <= N <= 2*10^6

1 <= A[i] <= 10^9

Output Format

Print an integer denoting the count of special elements.

Sample Input 0

4
2 1 6 4
Sample Output 0

1
Explanation 0

Remove 1 from array

Then sum at odd and even positions is 6

Sample Input 1

5
5 5 2 5 8
Sample Output 1

2
Explanation 1

You can remove 5 at position 1 or position 2
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
    int odd = 0, even = 0;
    vector<int>left_even(n, 0);
    vector<int>left_odd(n, 0);
    vector<int>right_even(n, 0); 
    vector<int>right_odd(n, 0);
    for(int i = 0; i < n; i++)
    {
        left_even[i]= even;
        left_odd[i] = odd;
        if(i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    odd = even = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        right_even[i]= even;
        right_odd[i] = odd;
        if(i % 2 == 0)
        {
            even += arr[i];
        }
        else
        {
            odd += arr[i];
        }
    }
    int special_ele = 0;
    for(int i = 0; i < n; i++)
    {
        if((left_even[i] + right_odd[i]) == (left_odd[i] + right_even[i]))
        {
            special_ele++;
        }
    }
    cout << special_ele << endl;
}
// nice problem
// tc o(n)
// sc o(n)
