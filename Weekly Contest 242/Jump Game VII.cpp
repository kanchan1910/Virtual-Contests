class Solution {
public:
    bool canReach(string s, int minJump, int maxJump)
    {
        int n = s.length();
        if(s[n - 1] != '0')
        {
            return false;
        }
        queue<int>q;
        q.push(0);
        int farthest_reached = 0;
        while(!q.empty())
        {
            int i = q.front();
            q.pop();
            for(int j = max(i + minJump, farthest_reached + 1); j <= min(i + maxJump, n - 1); j++)
            {
               if(s[j] == '0')
               {
                   if(j == n - 1)
                   {
                       return true;
                   }
                   q.push(j);
               }
                farthest_reached = j;
            }
            
        }
        return false;
    }
};
