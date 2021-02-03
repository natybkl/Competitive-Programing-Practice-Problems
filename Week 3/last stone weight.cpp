class Solution {
public:
    int lastStoneWeight(vector<int>& stone) {
            
     priority_queue<int> stones;
     for(int i:stone)
      stones.push(i);
        
        while(stones.size() > 1 ) {
            
            int max1=stones.top();
            stones.pop();
            int max2=stones.top();
            stones.pop();
            int dif=abs(max1-max2);
            
            if(dif != 0 ) {
                stones.push(dif);
            } else if(dif == 0 && stones.empty()){
                stones.push(dif);
            }
            
        }
        
        return stones.top();
        
    }
};
