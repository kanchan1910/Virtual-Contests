// https://codingcompetitions.withgoogle.com/codejamio/round/00000000004360f2/0000000000777098

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int j = 1; j <= t; j++)
    {
        int n;
         cin >> n;
         int arr[n];
         for(int i = 0; i < n; i++)
         {
             cin >> arr[i];
         }
         sort(arr, arr + n);
         int val = 1;
         int ans = 1;
         for(int i = 1; i < n; i++)
         {
             if(arr[i] > arr[i - 1])
             {
                 val++;
                 ans += val;
             }
             else if(arr[i] == arr[i - 1])
             {
                 ans += val;
             }
         }
         cout << "Case #" << j << ":" << " " << ans << endl;
    }
}

// nice problem 
// tc o(nlogn)
// sc o(1)
