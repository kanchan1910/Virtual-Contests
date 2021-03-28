class Solution {
public:
    int reinitializePermutation(int n)
    {
       int ans = 0, i;
       vector<int>perm(n), arr(n);
        for(int i = 0 ; i < n ; i++)
        {
            perm[i] = i;
        }
        while(true)
        {
            ans++;
            for(int i = 0 ; i < n ; i++)
            {
                if(i % 2 == 0)
                {
                    arr[i] = perm[i / 2];
                }
                else
                {
                    arr[i] = perm[n / 2 + (i - 1) / 2];
                }
            }
            perm = arr;
            for(i = 0 ; i < n ; i++)
            {
                if(perm[i] != i)
                {
                    break;
                }
            }

            if(i == n)
            {
                break;
            }
        }
        return ans;
    }
};
// tc o(n * n)
// sc o(n)
