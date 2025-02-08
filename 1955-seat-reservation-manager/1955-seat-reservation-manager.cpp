

class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq;

    SeatManager(int n) {
        while(n>0)
        {
            pq.push(n);
            n--;
        }
    }
    
    int reserve() {

      int x= pq.top();
      pq.pop();
      return x;
    }
    
    void unreserve(int seatNumber) {
        pq.push(seatNumber);
    }
};
