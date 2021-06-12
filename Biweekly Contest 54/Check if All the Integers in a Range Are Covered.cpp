class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) 
    {
        sort(ranges.begin(), ranges.end());
        int n = ranges.size();
        int s = left;
        for(int i = 0; i < n; i++)
        {
            if(ranges[i][0] == s)
            {
                s++;
            }
          
             while(s > ranges[i][0] && s < ranges[i][1])
            {
                s++;
            }
            if(ranges[i][1] == s)
            {
                s++;
            }
           
            if(s > right)
            {
                return true;
            }
        }
        return false;
    }
};

// tc o(nlogn)
// sc o(1)
