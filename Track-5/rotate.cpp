class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                matrix[i].push_back(matrix[j][i]);
            }  
        }
        
        
        for(auto& a: matrix) {
            reverse(a.begin(),a.end());
            for(int i = 0; i < n; i++) {
                a.pop_back();
            }
        }
        
        
    }
}; 

