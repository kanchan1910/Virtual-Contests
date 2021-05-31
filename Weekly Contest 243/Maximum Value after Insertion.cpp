class Solution {
public:
    string maxValue(string n, int x) 
    {
        string newstr = "";
        bool neg = false;
        if(n[0] == '-')
        {
            neg = true;
            string str = n.substr(1);
             bool f = false;
            for(int i = 0; i < str.length(); i++)
            {
                if(str[i] > (x + '0'))
                
                {
                    cout << "hey";
                    string sub = str.substr(i);
                    newstr += to_string(x);
                    newstr += sub;
                    // n[i] = (x + '0');
                    // n += sub;
                    f = true;
                    break;
                }
                else
                {
                    newstr += str[i];
                }
            }
            if(f == false)
            {
                newstr = str;
                newstr += to_string(x);
            }
            
        }
        else
        {
            
         bool f = false;
            
            for(int i = 0; i < n.length(); i++)
            {
               if(n[i] < (x + '0'))
                
                {
                    cout << "here";
                    string sub = n.substr(i);
                    newstr += to_string(x);
                    newstr += sub;
                    // n[i] = (x + '0');
                    // n += sub;
                    f = true;
                    break;
                }
                else
                {
                    newstr += n[i];
                }
            }
            if(f == false)
            {
                newstr = n;
                newstr += to_string(x);
            }
        }
        
        return neg == false ? newstr : ("-" + newstr);
    }
};

// 47
//     547
//     475
//     457
    
//     74
//     574
//     754
//     745
    
//     77
//     775
//     577
//     757


// 13
//     213
//     123
//     132

// -349
// -439
//     -493
// "99"
// 9
// "-13"
// 2
// "47"
// 5
// "74"
// 5
// "77"
// 5
// "-49"
// 3
