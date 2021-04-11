class Solution {
public:
    int minSideJumps(vector<int>& obstacles)
    {
        int cur = 2;
        int jumps = 0;
        int lane1 = 1;
        int lane3 = 3;
        for(int i = 0; i < obstacles.size() - 1; i++)
        {
            if(obstacles[i + 1] == cur)
            {
                 // find the occurance of obstacles in the rest 2 lanes for the rest of the path
                auto x = find(obstacles.begin() + i, obstacles.end(), lane1);
                auto y = find(obstacles.begin() + i, obstacles.end(), lane3);
               // if there is no obstacle in any lane till the end jump to that lane and break
                if(x == obstacles.end() || y == obstacles.end())
                {
                    jumps++;
                    break;
                }
                else
                { 
                    // otherwise move to that lane in which the occurance of obstacle is at later stage so we can get min no. of jumps

                    if(x - obstacles.begin() > y - obstacles.begin())
                    {
                        swap(cur, lane1); //make this lane as the current lane
                        jumps++;
                    }
                    else
                    {
                        swap(cur, lane3); //make this lane as the current lane
                        jumps++;
                    }
                }
            }
        }
        return jumps;
    }
};
