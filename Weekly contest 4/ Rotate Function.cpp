class Solution {
public:
    int maxRotateFunction(vector<int>& nums) 
    {
        int n = nums.size();
        if(n == 1)
        {
            return 0;
        }
        // for k = 0
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            ans += (i * nums[i]);
        }
        vector<int>perma = nums;
        int sum = 0;
        for(int k = 1; k <= n - 1; k++)
        {
            sum = 0;
            nums = perma;
            reverse(nums.begin(), nums.end());
            reverse(nums.begin(), nums.begin() + k);
            reverse(nums.begin() + k, nums.end());
            for(int j = 0; j < n; j++)
            {
                sum += (j * nums[j]);
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
// TLE
// tc o(n * n)
// sc o(1)




class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        if(A.size() == 1)
        {
            return 0;
        }
        long long total = 0;
        int sum = 0;
        for (int i = 0; i < A.size(); i++) 
        {
            total += A[i];
            sum += A[i] * i;
        }
        int answer = sum;
        for (int i = A.size() - 1; i >= 0; i--)
        {
            sum += total - A.size() * A[i];
            if (sum > answer)
            {
                answer = sum;
            }
        }
        return answer;
    }
};
// tc o(n)
// sc o(1)
