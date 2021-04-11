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
         char arr[n][n];
         for(int i = 0; i < n; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 cin >> arr[i][j];
             }
         }
         int r1,r2,c1,c2;
         bool f = false, flag = false;
         for(int i = 0; i < n; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 if(arr[i][j] == '*' && f == false)
                 {
                     r1 = i;
                     c1 = j;
                     f = true;
                 }
                 else if(arr[i][j] == '*' && f == true)
                 {
                     r2 = i;
                     c2 = j;
                     break;
                     flag = true;
                 }
             }
             if(flag == true)
             {
                 break;
             }
         }
         int r3,r4,c3,c4;
         if((r1 == r2) && (c1 != c2))
         {
             if(r1 == 0)
             {
                 r3 = r1 + 1;
                 r4 = r1 + 1;
                 c3 = c1;
                 c4 = c2;
             }
             else if(r1 == n - 1)
             {
                 r3 = r1 - 1;
                 r4 = r1 - 1;
                 c3 = c1;
                 c4 = c2;
             }
             else
             {
                 r3 = r1 + 1;
                 r4 = r1 + 1;
                 c3 = c1;
                 c4 = c2;
             }
         }
         else if((c1 == c2) && (r1 != r2))
         {
             if(c1 == 0)
             {
                 r3 = r1;
                 r4 = r2;
                 c3 = c1 + 1;
                 c4 = c1 + 1;
             }
             else if(c1 == n - 1)
             {
                 r3 = r1;
                 r4 = r2;
                 c3 = c1 - 1;
                 c4 = c1 - 1;
             }
             else
             {
                 r3 = r1;
                 r4 = r2;
                 c3 = c1 + 1;
                 c4 = c1 + 1;
             }
         }
         else if((r1 != r2) && (c1 != c2))
         {
             if(c1 < c2)
             {
                 r3 = r2;
                 r4 = r1;
                 c3 = c1;
                 c4 = c2;
             }
             else
             {
                 r3 = r1;
                 r4 = r2;
                 c3 = c2;
                 c4 = c1;
             }
         }
         arr[r3][c3] = arr[r4][c4] = '*';
         for(int i = 0; i < n; i++)
         {
             for(int j = 0; j < n; j++)
             {
                 cout << arr[i][j];
             }
             cout << endl;
         }
    }  
}
