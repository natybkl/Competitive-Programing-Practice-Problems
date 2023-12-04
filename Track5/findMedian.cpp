class MedianFinder {
public:
    priority_queue<int> small, large;
    /** initialize your data structure here. */
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        large.push(-1 * num);

        while (large.size() - small.size() > 1) {
            small.push(-1 * large.top());
            large.pop();
        }
        
        while (!small.empty() && !large.empty() && small.top() > -1 * large.top()) {
            small.push(-1 * large.top()); 
            large.push(-1 * small.top());
            small.pop(); 
            large.pop();
        }
    }
    
    double findMedian() {
        if (small.size() != large.size()) 
             return large.top() * -1;
        else 
             return (small.top() - large.top()) / 2.0;
    }

};
