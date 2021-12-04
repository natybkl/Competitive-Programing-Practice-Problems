/// TLE working solution
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int res = 0;
        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        while(!q.empty()){
            int sz = q.size();
            int _max = 0, _min = INT_MAX;

            
            bool islastLevel = 0;
            int lable = 1;
            //int _min = q.top().second;
            for(int i = 1; i <= sz; i++){
                auto a = q.front();
                q.pop();
                
                if(a.first) {
                     _min = min(_min, a.second);
                     _max = max(_max, a.second);
                     q.push({a.first->left, lable++});
                     q.push({a.first->right, lable++});
                     islastLevel = 1;
                } else {
                     q.push({NULL, lable++});
                     q.push({NULL, lable++});
                }
            }

             if(!islastLevel) return res + 1;
             res = max(res, _max-_min);
           
        }


        return res;
    }
};







// number gets too large for multiplication
#define ll unsigned long
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        ll res = 0;
        queue<pair<TreeNode*, ll>> q;
        q.push({root, 1});

        while(!q.empty()){
            int sz = q.size();
            ll _max = 0, _min = INT_MAX;
           
            for(int i = 1; i <= sz; i++){
                auto a = q.front();
                q.pop();
                  
                 _min = min(_min, a.second);
                 _max = max(_max, a.second);
                 if(a.first->left)  q.push({a.first->left, a.second*2});
                 if(a.first->right)  q.push({a.first->right, a.second*2 + 1});
                
            }
            
             res = max(res, _max -_min);
        }


        return res + 1;
    }
};



//finally working solution
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#define ll unsigned long
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        ll res = 0;
        queue<pair<TreeNode*, ll>> q;
        q.push({root, 1});
        while(!q.empty()){
            int sz = q.size();
            res = max(res, q.back().second - q.front().second + 1);
         
            for(int i = 1; i <= sz; i++){
                auto a = q.front();
                q.pop();
                  
                 auto idx = a.second;
                 if(a.first->left)  q.push({a.first->left, idx*2});
                 if(a.first->right)  q.push({a.first->right, idx*2 + 1});
                
            }
            
             
             //cout << res << " ";
        }


        return res;
    }
};
