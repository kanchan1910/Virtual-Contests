class Solution {
public:
   // The idea is compute distance of point from center. If distance is less than or equal to radius. the point is inside, else outside.

    bool fun(int center_x, int center_y, int x, int y, int radius)
    {
        return (((x - center_x) * (x - center_x)) + ((y - center_y) * (y - center_y)) <= radius * radius);
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries)
    {
        vector<int>ans;
        int n = queries.size();
        int m = points.size();
        for(int i = 0; i < n; i++)
        {
            int count = 0;
            int center_x = queries[i][0];
            int center_y = queries[i][1];
            int radius = queries[i][2];
            for(int j = 0; j < m; j++)
            {
                int x = points[j][0];
                int y = points[j][1];
                if(fun(center_x, center_y, x, y, radius) == true)
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
