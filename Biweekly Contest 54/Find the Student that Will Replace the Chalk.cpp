class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k)
    {
        int n = chalk.size();
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum += chalk[i];
        }
//         int cycle = k / sum;
        int rem = k % sum;
        for(int i = 0; i < n; i++)
        {
            if(rem < chalk[i])
            {
                return i;
            }
            rem -= chalk[i];
        }
        return 0;
    }
};
// tc O(n)
// sc O(1)
