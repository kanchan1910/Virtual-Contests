class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) 
    {
        vector<string>temp1,temp2;
        string word;
    stringstream iss(sentence1);
  
    // Read and print each word.
    while (iss >> word)
    {  
        temp1.push_back(word);
    }   
        string word1;
    stringstream ss(sentence2);
  
    // Read and print each word.
    while (ss >> word1) 
    {
        temp2.push_back(word1);
    }
        int n1 = temp1.size();
        int n2 = temp2.size();
        if(n1 == n2)
        {
           return temp1 == temp2;
        }
        vector<int>index;
        if(n1 < n2)
        {
            for(int i = 0; i < n1; i++)
            {
                if(find(temp2.begin(), temp2.end(), temp1[i]) == temp2.end())
                {
                    return false;
                }
            }
            
            for(int i = 0 ; i < n2; i++)
            {
                auto it = find(temp1.begin(), temp1.end(), temp2[i]);
                if(it == temp1.end())
                {
                    index.push_back(i);
                }
                else
                {
                 temp1.erase(it);   
                }
            }
        }
        else
        {
            for(int i = 0; i < n2; i++)
            {
                if(find(temp1.begin(), temp1.end(), temp2[i]) == temp1.end())
                {
                    return false;
                }
            }
            for(int i = 0 ; i < n1; i++)
            {
                auto it = find(temp2.begin(), temp2.end(), temp1[i]);
                if(it == temp2.end())
                {
                    index.push_back(i);
                }
                else
                {
                    temp2.erase(it);
                }
            }
        }
        
        bool ans = true;
   /*     for(int i = 0 ; i < index.size(); i++)
        {
            cout << index[i] << " ";
        }
        cout << endl;
        */
        for(int i = 0; i < index.size() - 1; i++)
        {
            if((index[i + 1] - index[i]) > 1)
            {
                ans = false;
                break;
            }
        }
            return ans;
    }
};
