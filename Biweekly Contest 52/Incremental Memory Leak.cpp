class Solution {
public:
    vector<int> memLeak(int memory1, int memory2)
    {
        int timer = 0;
        while(true)
        {
            timer++;
            if(memory1 < timer && memory2 < timer)
            {
                break;
            }
            if(memory2 > memory1)
            {
                memory2 -= timer;
            }
            else
            {
                memory1 -= timer;
            }
        }
        return {timer, memory1, memory2};
    }
};
