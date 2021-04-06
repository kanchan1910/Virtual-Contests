/*
Fermat's has decided to make his own tic tac toe version and he is looking for some help for the design. you need to programme the code for printing the following pattern of (O,X) for odd value of the input N.

consider the test cases given .

Input:
First line will contain N, an integer N
Output:
print the desired pattern for the given value of N ( N is always ODD)

Constraints
1≤N≤100
N is ODD
Sample Input 1:
3
Sample Output 1:
O X O
X O X
O X O
Sample Input 2:
5
Sample Output 2:
O O O X O
O O X O X
O X O X O
X O X O O 
O X O O O

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // implementation problem
    int n;
    cin >> n;
    vector<vector<char>>arr(n, vector<char>(n, 'O'));
    int diagonal1 = n - 2;
    for(int i = 0; i < n - 1; i++)
    {
        arr[i][diagonal1] = 'X';
        diagonal1--;
    }
    int diagonal2 = n - 1;
    for(int i = 1; i < n; i++)
    {
        arr[i][diagonal2] = 'X';
        diagonal2--;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
// tc o(N * N)

// sc O(1)
