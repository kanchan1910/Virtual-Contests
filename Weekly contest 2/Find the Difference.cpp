class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        if(s == "")
        {
            return t[0];
        }
        unordered_map<char, int>m;
        for(int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        char ch;
        for(int i = 0; i < t.length(); i++)
        {
           if(m.find(t[i]) == m.end())
           {
               ch = t[i];
               break;
           }
           else 
           {
               if(m[t[i]] > 0)
               {
                   m[t[i]]--;
               }
               else
               {
                   ch = t[i];
                   break;
               }
           }
        }
        return ch;
    }
};
// tc o(n)
// sc o(n)



class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        if(s == "")
        {
            return t[0];
        }
        int xxor = 0;
        for(int i = 0; i < s.length(); i++)
        {
            xxor ^= (s[i] - 'a');
        }
        for(int i = 0; i < t.length(); i++)
        {
            xxor ^= (t[i] - 'a');
        }
        return xxor + 'a';
    }
};

// tc o(n)
// sc o(1)
