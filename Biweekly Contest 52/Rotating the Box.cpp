class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) 
    {
        int n = box.size();
        int m = box[0].size();
        
        for(int i = 0; i < n; i++)
        {
            for(int j = m - 1; j >= 0; j--)
            {
                if(box[i][j] == '.' || box[i][j] == '*')
                {
                    continue;
                }
                else
                {
                    int jelly = j;
                    if(jelly == m - 1)
                    {
                        continue;
                    }
                    else
                    {
                        while(true)
                        {
                            if(jelly + 1 == m - 1 && box[i][jelly + 1] == '.')
                            {
                                box[i][jelly + 1] = '#';
                                box[i][j] = '.';
                                break;
                            }
                            else if((jelly + 1 == m - 1) || box[i][jelly + 1] == '*' || box[i][jelly + 1] == '#')
                            {
                                if(jelly == j)
                                {
                                    box[i][j] = '#';
                                }
                                else
                                {
                                    box[i][j] = '.';
                                    box[i][jelly] = '#';
                                }
                                break;
                            }
                            jelly++;
                        }
                    }
                }
            }
        }
        vector<vector<char>>ans(m, vector<char>(n));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ans[j][n - i - 1] = box[i][j];
            }
        }
        return ans;
    }
};
