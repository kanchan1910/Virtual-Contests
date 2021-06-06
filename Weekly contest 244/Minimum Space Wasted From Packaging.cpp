


class Solution {
public:
    int minWastedSpace(vector<int>& packages, vector<vector<int>>& boxes)
    {
        sort(packages.begin(), packages.end());
        int rows = boxes.size();
        for(int i = 0; i < rows; i++)
        {
            sort(boxes[i].begin(), boxes[i].end());
        }
        int ans = INT_MAX;
       
        for(int i = 0; i < rows; i++)
        {
             int sum = 0;
            if(boxes[i][boxes[i].size() - 1] < packages[packages.size() - 1])
            {
                continue;
            }
            else
            {
                int j = 0;
                for(int p = 0; p < packages.size();)
                {
                    if(j < boxes[i].size() && boxes[i][j] >= packages[p])
                    {
                       sum += (boxes[i][j] -  packages[p]); 
                        p++;
                    }
                    else
                    {
                        j++;
                    }
                }
            }
            ans = min(ans, sum);
        }
        return ans == INT_MAX ? -1 : ans % 1000000007;
    }
};
// TLE





class Solution {
public:
 int minWastedSpace(vector<int>& nums, vector<vector<int>>& boxes)
 {
        sort(nums.begin(),nums.end());
        long long  ans=1e12;
        int n = nums.size();
        vector<long long>pre(n+2,0);
        for(int i = 1; i <= n; i++)
        {
            pre[i] = pre[i-1] + nums[i-1];
        }
        int size = boxes.size();
        for(int i = 0; i < size; i++)
        {
        
            sort(boxes[i].begin(),boxes[i].end());
            long long cnt = 0;
            int m = boxes[i].size();
            if(boxes[i][m - 1] < nums[n - 1])
            {
                continue;
            }
            int x = 0;
            for(int j = 0 ;j < m; j++)
            {
                int ind = upper_bound(nums.begin(),nums.end(),boxes[i][j])-nums.begin();
                long long z = boxes[i][j];
                long long res = (ind - x)*(z)-(pre[ind] - pre[x]);
                cnt +=res;
                x = ind;
                if(ind >= n)
                    break;
            }
            ans = min(cnt,ans);
        }
        return ans == 1e12 ? -1  :ans %  1000000007;
    }
};

//ACCEPTED
// USING THE CONCEPT OF BINARY SEARCH AND PREFIX SUM
