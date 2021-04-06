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
         int arr[n];
         for(int i = 0 ; i < n; i++)
         {
             cin >> arr[i];
         }
         long long ans = 0;
         int start_window = 0;
         int increasing = 0;
         int min_val = arr[0];
         for(int i = 1; i < n; i++)
         {
             // increasing
             if(arr[i] > arr[i - 1])
             {
               if(increasing == 0)
               {
                 increasing = 1;
                 min_val = min(min_val, arr[i]);   
               }
             
             else if(increasing == 1)
             {
                 min_val = min(min_val, arr[i]);
             }
             else if(increasing == -1)
             {
                 
                ans +=  ((i - start_window) * min_val);
                start_window = i - 1;
                increasing = 1;
                min_val = min(arr[i], arr[start_window]);
             }
             }
             // decreasing
             else
             {
                 if(increasing == 1)
                 {
                    
                     ans += ((i - start_window) *  min_val);
                     start_window = i - 1;
                     increasing = -1;
                     min_val = min(arr[i], arr[start_window]);
                 }
                 else if(increasing == -1)
                 {  
                     min_val = min(min_val, arr[i]);
                 }
                 else if(increasing == 0)
                 {
                     increasing = -1;
                     min_val = min(min_val, arr[i]);
                 }
             }
         }

     ans += ((n - start_window) * min_val);
        
         cout << ans << endl;
     }
 }
 
 /*
 4
 33 36 27 15
 ans : 111
 6
 21 12 27 40 9 13
 ans : 96
 */
