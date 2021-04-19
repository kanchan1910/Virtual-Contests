#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int arr[n];
        for(int i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int>m;
        for(int i = 0; i < n; i++)
        {
          m[arr[i]]++;   
        }
        int extra = 0;
        for(auto val: m)
        {
            if(val.second > 1)
            {
                extra += val.second - 1; 
            }
        }
        if(extra >= x)
        {
            cout << m.size() << endl;
        }
        else
        {
            cout << (m.size() - (x - extra)) << endl;
        }
    }

}
