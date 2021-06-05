class Solution {
public:
    long long int x;
    long long integerReplacement(long long n)
    {
        // base case
        if(n == 1)
        {
            return 0;
        }
        if(n % 2 == 0)
        {
          return 1 + integerReplacement(n / 2);
        }
        else
        {
           x = min(integerReplacement(n + 1), integerReplacement(n - 1));
           return 1 + x;
        }
    }
};
