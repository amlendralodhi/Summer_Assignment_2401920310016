class RecentCounter {
public:
    queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        if(q.empty())
        {
            q.push(t);
            return 1;
        }
        while(!q.empty() && (t-q.front()) >3000)
        {
            q.pop();
        }
        q.push(t);
        return q.size();
    }
};