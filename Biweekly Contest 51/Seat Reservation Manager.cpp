class SeatManager {
public:
     priority_queue<int,vector<int>,greater<int>>ur;

    SeatManager(int n) {
    for(int i = 1; i <= n; i++)
    {
        ur.push(i);
    }
    }
    int reserve() {
        int val = ur.top();
        ur.pop();
        return val;
    }
    
    void unreserve(int seatNumber) {
       ur.push(seatNumber);
    }
};
