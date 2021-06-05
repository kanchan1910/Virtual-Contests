class Solution {
public:
    unordered_map<int, vector<int>>m;
    Solution(vector<int>& nums)
    {
        for(int i = 0; i <nums.size(); i++)
        {
            m[nums[i]].push_back(i);
        }
    }
    
    int pick(int target) 
    {
        vector<int>tmp = m[target];
        return tmp[rand()%tmp.size()];
    }
};
// tc o(n)
// sc o(n)
