#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	char mat[n][m];
	int arr[n][m];
	int count = 0;
	// transforming character matrix into integer matrix
	for(int i = 0 ; i < n; i++)
	{
	    for(int j = 0; j < m; j++)
	    {
	       cin >> mat[i][j];
	       if(mat[i][j] == '_')
	       {
	           arr[i][j] = -1;
	       }
	       else
	       {
	        arr[i][j] = mat[i][j] - '0';
	       }
	       if(arr[i][j] == 1 || arr[i][j] == 2)
	       {
	           count++;
	       }
	    }
	}
	// if there are no 1's or 2's then we will need 0 days
	if(count == 0)
	{
	    cout << 0 << endl;
	    return 0;
	}
/*	for(int i = 0; i < n; i++)
	{
	    for(int j = 0; j < m; j++)
	    {
	        cout << arr[i][j] << " ";
	    }
	    cout << endl;
	}
*/
bool vis[n][m];
bool ek_baaar = false;
int days = 0;
while(true)
{
    bool flag = false;
    memset(vis, false, sizeof(vis));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 0 && vis[i][j] == false)
            {
                vis[i][j] = true;
                if(i - 1 >= 0 && (arr[i - 1][j] == 1 || arr[i - 1][j] == 2) && vis[i - 1][j] == false)
                {
                    vis[i - 1][j] = true;
                    arr[i - 1][j] -= 1;
                    flag = true;
                }
                if(i + 1 < n && (arr[i + 1][j] == 1 || arr[i + 1][j] == 2)&& vis[i + 1][j] == false)
                {
                    vis[i + 1][j] = true;
                    arr[i + 1][j] -= 1;
                    flag = true;
                }
                if(j - 1 >= 0 && (arr[i][j - 1] == 1 || arr[i][j - 1] == 2) && vis[i][j - 1] == false)
                {
                    vis[i][j - 1] = true;
                    arr[i][j - 1] -= 1;
                    flag = true;
                }
                if(j + 1 < m && (arr[i][j + 1] == 1 || arr[i][j + 1] == 2) && vis[i][j + 1] == false)
                {
                    vis[i][j + 1] = true;
                    arr[i][j + 1] -= 1;
                    flag = true;
                }
            }
        }
    }
    if(flag == true)
    {
        ek_baaar = true;
        days++;
    }
    else
    { // either there will be no 0 in the matrix or there are no 1's and 2's near any 0
    // then we can return
        break;
    }
}
// if ek_baar == false , means that there are 1's and 2's in the matrix but er have never done anaything eith them , means return -1.
if(ek_baaar == false)
{
    cout << -1 << endl;
}
else
{
 cout << days << endl;	   
}
}

