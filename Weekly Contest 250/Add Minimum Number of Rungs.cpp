class Solution {
public:
    int addRungs(vector<int>& rungs, int dist)
    {
        int ans = 0;
        int n = rungs.size();
        int cur = 0;
        for(int i = 0; i < n; i++)
        {
            if(rungs[i] <= cur + dist)
            {
                cur = rungs[i];
            }
            else
            {
                int diff = rungs[i] - cur;
                ans += ((diff - 1)/ dist);   
                cur = rungs[i];
            }
        }
        return ans;
    }
};
 

    



class Solution {
public:
    int addRungs(vector<int>& rungs, int dist)
    {
        int ans = 0;
        int n = rungs.size();
        int cur = 0;
        for(int i = 0; i < n;)
        {
            if(rungs[i] <= cur + dist)
            {
                cur = rungs[i];
                i++;
            }
            else
            {
                ans++;
                cur = cur + dist;
            }
        }
        return ans;
    }
};
// tle
