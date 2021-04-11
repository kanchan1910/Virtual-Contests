 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    // taking the input
    int t;
    cin >> t;
    while(t--)
    {
         int n;
         cin >> n;
         int arr[n];
         for(int i = 0 ; i < n; i++)
         {
             cin >> arr[i];
         }
         unordered_map<int , int>m;
         for(int i = 0; i < n; i++)
         {
             m[arr[i]]++;
         }
         int ans;
         for(int i = 0; i < n; i++)
         {
             if(m[arr[i]] == 1)
             {
                 ans = i + 1;
                 break;
             }
         }
         cout << ans << endl;
    }  
}
