class Solution {
public:
    int brokenCalc(int startValue, int target){
        int cnt = 0;
        while(startValue < target){
            target = !(target % 2) ? target / 2 : target + 1;
            cnt++;
        }
        
        return cnt + startValue - target;
    }
};
