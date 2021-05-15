class Solution {
public:
    bool static com(pair<int, string>& a, pair<int, string>& b)
    {
        return a.first < b.first;
    }
    string sortSentence(string s)
    {
        vector<pair<int, string>>ans;
    istringstream ss(s);
  
    string word; // for storing each word
  
    while (ss >> word) 
    {
       string str = word;
       char ch = str.back();
        int num = ch;
         str.erase(str.size() - 1);
        ans.push_back({num, str});
    }
        sort(ans.begin(), ans.end(), com);
       string res = "";
        for(int i = 0; i < ans.size() - 1; i++)
        {
            res += ans[i].second;
            res += " ";
        }
        res += ans[ans.size() - 1].second;
        return res;
    }
};
