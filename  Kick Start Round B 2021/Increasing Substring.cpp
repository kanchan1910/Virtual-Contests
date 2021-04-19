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
        string str;
        cin >> str;
        int dp[n];
        dp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            if(str[i] > str[i - 1])
            {
                dp[i] = dp[i - 1] + 1;
            }
            else
            {
                dp[i] = 1;
            }
        }
        cout << "Case #" << j << ":" << " ";
        for(int i = 0; i < n; i++)
        {
            cout << dp[i] << " ";
        }
        cout << endl;
    }
}
// tc o(n)
// sc o(n)
