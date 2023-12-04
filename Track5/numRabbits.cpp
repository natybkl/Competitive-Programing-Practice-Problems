class Solution {
public:
	int numRabbits(vector<int>& answers) {
		priority_queue<int> count;
        int res = 0;
        
		for (int ans : answers) {
			count.push(ans + 1); 
		}
	
		while (!count.empty()) {
			int c = count.top();
			res += c;
            
			for (int i = 0; i < c; i++) {
				if (count.empty() || count.top() != c) {
                     break;
                }  
				count.pop();
			}
		}

		return res;
	}
};
