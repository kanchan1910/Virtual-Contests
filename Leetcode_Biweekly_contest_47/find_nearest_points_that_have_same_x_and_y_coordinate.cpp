class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) 
    {
        int n = points.size();
        int ans = INT_MAX;
        int index = INT_MAX;
        for(int i = 0 ; i < n ; i++)
        {
            if(points[i][0] == x || points[i][1] == y)
            {
                int dis = abs(x - points[i][0])  + abs(y - points[i][1]);
                if(dis < ans)
                {
                    ans = dis;
                    index = i;
                }
                else if(dis == ans)
                {
                    if(index > i)
                    {
                        index = i;
                    }
                }
            }
        }
        return index == INT_MAX ? -1 : index;
    }
};


// tc o(n)
// sc O(1)
