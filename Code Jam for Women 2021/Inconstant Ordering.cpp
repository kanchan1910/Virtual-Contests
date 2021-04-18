// https://codingcompetitions.withgoogle.com/codejamio/round/00000000004360f2/00000000007772ed

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
        string ans = "A";
        for(int i = 0; i < n; i++)
        {
            // increasing
            if(i % 2 == 0)
            {
                for(int j = 0; j < arr[i] - 1; j++)
                {
                    ans.push_back(j + 'B');
                }
                if(i == n - 1)
                {
                    ans.push_back('A' + arr[i]);
                }
                else
                {
                    ans.push_back('A' + max(arr[i], arr[i + 1]));
                }
            }
              // decreasing
            else
            { 
                for(int j = 0; j < arr[i]; j++)
                {
                    ans.push_back('A' + arr[i]- 1 - j);
                }
            }
        }
        cout << "Case #" << j << ":" << " " << ans << endl;
    }
}
// nice problem
