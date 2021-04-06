class Solution {
public:
    string truncateSentence(string s, int k)
    {
        string word;
        stringstream iss(s);
        string ans = "";
        int count = 0;
        while(iss >> word)
        {
            if(count != 0)
            {
                ans += " ";
            }
            ans += word;
            count++;
            if(count == k)
            {
                break;
            }
        }
        return ans;
    }
};
