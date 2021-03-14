class Solution {
public:
    bool areAlmostEqual(string s1, string s2) 
    {
        int differences =  0;
        int n = s1.length();
        unordered_map<char,int>m1,m2;
        for(int i = 0 ; i < n; i++)
        {
            m1[s1[i]]++;
        }
         for(int i = 0 ; i < n; i++)
        {
            m2[s2[i]]++;
        }
        if(m1 != m2)
        {   // characters same ni h to return false
            return false;
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(s1[i] != s2[i])
            {
                differences++;
            }
        }
        // same characters h to we will check for the differences
        if(differences == 0 || differences == 2)
        {
            return true;
        }
        return false;
    }
};

// tc o(n)
// sc o(n)
