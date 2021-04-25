class Solution {
public:
    int sumBase(int n, int k) 
    {
        int sum = 0;
        int rem = 0;
        int res = 0;
        int i = 1;
        while(n != 0)
        {
            rem = n % k;
            res = i * rem + res;
            sum += rem;
            n = n / k;
        }
        return sum;
    }
};
