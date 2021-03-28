class Solution {
public:
  int numDifferentIntegers(string word)
  {
    int n = word.size();
    unordered_set<string>s;
    string tmp = "";
    for (int i = 0 ; i < n ; i++)
    {

      if (word[i] >= 'a' && word[i] <= 'z')
      {

        if (tmp != "")
        {
          if (tmp.size() == 1)
          {
            s.insert(tmp);
            tmp = "";
          }
          else
          {
            while (tmp.size() > 1 && tmp[0] == '0')
            {
              tmp.erase(0 , 1);
            }
            s.insert(tmp);
              tmp = "";
          }
        }
      }
      else
      {
        tmp += word[i];
      }
    }
    if (tmp != "")
    {
      if (tmp.size() == 1)
      {
        s.insert(tmp);
      }
      else
      {
        while (tmp.size() > 1 && tmp[0] == '0')
        {
          tmp.erase(0 , 1);
        }
       s.insert(tmp);
      }
    }

    return s.size();
  }
};
// tc o(n)
// sc o(n)
