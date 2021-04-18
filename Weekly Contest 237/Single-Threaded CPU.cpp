// nice problem 
class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) 
    {
        int n = tasks.size();
        vector<pair<int, pair<int, int>>>v;
        for(int i = 0; i < n; i++)
        {
            v.push_back({tasks[i][0], {tasks[i][1], i}});
        }
        // sorted according to the arrival time 
        sort(v.begin(), v.end());
        priority_queue<pair<int, pair<int,int>>, vector<pair<int, pair<int,int>>>, greater<pair<int, pair<int,int>>>>pq;
        vector<int>ans;
        int index = 0;
        long long time = v[index].first;
        while(!pq.empty() || index < n)
        {
            while(index < n && time >= v[index].first)
            {
                pq.push({v[index].second.first, {v[index].second.second, v[index].first}});
                index++;
            }
            if(!pq.empty())
            {
                     time += pq.top().first;
                     ans.push_back(pq.top().second.first);
                     pq.pop();   
            }
            if(index < n && time < v[index].first && pq.empty())
            {
                time = v[index].first;
            }
        }
        return ans;
    }
};
