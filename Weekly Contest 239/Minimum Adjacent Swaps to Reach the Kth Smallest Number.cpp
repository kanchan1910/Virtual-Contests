class Solution {
public:
// for minimum adjacent swaps
    int fun(string s1, string s2, int size)
    {
        int i = 0, j = 0;
        int result = 0;

        while (i < size)
        {
            j = i;
            
            while (s1[j] != s2[i])
            {
                j += 1;
            }

            while (i < j) 
            {
                swap(s1[j], s1[j - 1]);
                j -= 1;
                result += 1;
            }
            i += 1;
        }
        return result;
    }
    int getMinSwaps(string num, int k)
    {
      string o = num;
     while(k--)
     {
         bool val = next_permutation(num.begin(),
                           num.end());

     }
      return fun(o, num, num.size());
    }
};
