class Solution {
public:
    bool checkZeroOnes(string s)
    {
        int max_one = 0, max_zero = 0;
        int one = 0, zero = 0;
        int n = s.length();
        for(int i = 0; i < n;)
        {
            if(s[i] == '1')
            {
                one = 0;
                while(i < n && s[i] == '1')
                {
                    one++;
                    i++;
                }
                max_one = max(max_one, one);
            }
            else
            {
                zero = 0;
                while(i < n && s[i] == '0')
                {
                    zero++;
                    i++;
                }
                max_zero = max(max_zero, zero);
            }
        }
      return max_one > max_zero;  
    }
};
// tc o(N)
// sc o(1)
