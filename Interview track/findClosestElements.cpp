class comp{
public:
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2){
        if(p1.first != p2.first)
            return p1.first < p2.first;
        else
            return p1.second > p2.second;
    }
};

class Solution {
public:
    
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>, vector<pair<int, int>>, comp> minheap; 
        vector<int> res;
        
        for(int i=0;i<arr.size();i++) {
            int distance = abs(arr[i] - x);
            minheap.push({-1*distance, arr[i]});     
        }
        
        
        while(k) {
            auto p = minheap.top();
            res.push_back(p.second);
            minheap.pop();
            k--;
        }
        
        sort(res.begin(),res.end());
        return res;
        
    }
};
