class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord)
    {
        int sum1  = 0, sum2 = 0, sum3 = 0;
        string str1 = "", str2 = "", str3 = "";
        for(int i = 0; i < firstWord.length(); i++)
        {
            str1 += (firstWord[i] - 'a') + '0';
        }
          for(int i = 0; i < secondWord.length(); i++)
        {
            str2 += (secondWord[i] - 'a') + '0';
        }
        
          for(int i = 0; i < targetWord.length(); i++)
        {
            str3 += (targetWord[i] - 'a') + '0';
        }
        
        // cout << str1 << " "<< str2 << " " << str3 << endl;
        // cout << stoi(str1) << " " << stoi(str2) << " " << stoi(str3) << endl;
        return stoi(str3) == (stoi(str1) + stoi(str2));
    }
};
