#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                count--;
            }
            else
            {
                count++;
            }
            if(count >= 0)
            {
                ans = 1;
                break;
            }
        }
        if(ans == 0) 
        cout << "NO" << endl;
        else
        cout << "YES" << endl;
    }
}
