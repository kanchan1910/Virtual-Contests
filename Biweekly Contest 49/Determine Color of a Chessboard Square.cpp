class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        bool ans;
        if(coordinates[0] == 'a' ||coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g')
        {
            if(coordinates[1] % 2 == 0)
            {
                ans =  true;
            }
            else
            {
                ans = false;
            }
        }
        else
        {
            if(coordinates[1] % 2 == 0)
            {
                ans = false;
            }
            else
            {
                ans = true;
            }
        }
        return ans;
    }
};
// tc o(1)
// sc o(1)
