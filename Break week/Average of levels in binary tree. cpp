class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
    deque<TreeNode*> dq;
    vector<double> res;
    double sum=0;
    int numele=0;
    
    dq.push_back(root);
    dq.push_back(nullptr);  
        
   while(!dq.empty()){
      TreeNode* node=dq.front(); 
      dq.pop_front();
      if(node->left) dq. push_back(node->left);
      if(node->right) dq. push_back(node->right);
      sum+=node->val; 
      numele++;
       
     if(dq.front()==NULL){
      double avg=sum/numele;     
      res.push_back(avg);
      sum=0;   
      numele=0;
      dq.pop_front();
      if(dq.empty()) break;
      dq.push_back(nullptr); 
           
       }
   }     
      return res; 
    }
};
