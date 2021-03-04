class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
          int res = 0;
          unordered_map<int, vector<int>> um;
        
        for(auto &a:edges) {
            um[a[0]].push_back(a[1]);
            um[a[1]].push_back(a[0]);
        }
		
       dfs(um, hasApple, 0, -1, res);

       return res;
    }

    bool dfs(unordered_map<int, vector<int>>& um, vector<bool>& hasApple, int root, int parent, int& res) {
           bool findpath= false;

           for(auto &a:um[root]) {
               if (a!=parent) {
                  if(dfs(um,hasApple,a,root,res)){
                        res += 2;
                        findpath= true;
                     }
                 }
             }
        return (findpath || hasApple[root]);
    }
};   
