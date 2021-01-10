class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        
       vector<int> v;
        
       bool found=false; 
        
       for(int i=0; i<T.size(); i++){
       
       int itr=1; int j=i+1;
          
       while(j<T.size()){    
          
       if(T[j]>T[i]) {
         
        v.push_back(itr); 
		  
        break; 
		
		found=true;
		
      }   
      
       j++; itr++;  
          
      } 
      
        if(found==false && j==T.size())  {v.push_back(0);}
   
      }
        
        return v;
    }
};



class Solution {
	
public:
 
vector<int> dailyTemperatures (vector<int>& T) {
	
        int n=T.size(); 
        
        vector<int> ans(n);
		  
        stack<int> s; 

    for(int i=n-1;i>=0;i--) {

      while(!s.empty() && T[i]>=T[s.top()])
                             
        s.pop();

       if(s.empty()) { ans[i]=0; } 

       else { ans[i]=s.top()-i; } 

       s.push(i);

    } 

      return ans;

 }

