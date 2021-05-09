// tc o(n * n)
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2)
    {
        // brute force 
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans = 0;
        for(int i = 0; i < n1; i++)
        {
            for(int j = i; j < n2; j++)
            {
                if(nums1[i] <= nums2[j])
                {
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }
};
// TLE


class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans = 0;
        for(int i = 0; i < n1; i++)
        {
            for(int j = n2 - 1; j >= i; j--)
            {
                if(nums1[i] <= nums2[j])
                {
                    ans = max(ans, j - i);
                }
            }
        }
        return ans;
    }
};
// TLE

class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans = 0;
        int i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            if(nums1[i] > nums2[j])
            {
                i++;
            }
            else
            {
                if(i <= j)
                {
                    ans = max(ans, j - i);
                }
                j++;
            }
        }
        return ans;
    }
};
// tc o(n)
// benefit of arrays given in decending order
