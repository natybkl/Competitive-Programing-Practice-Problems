

// transposing the input matric
vector<vector<int>> transpose_vector(const vector<vector<int>> &column_vec,int size) {
  
  vector<vector<int>> tran;
  
  for (int i=0; i<size; i++) {
      
      vector<int> row;
      
    for (int j=1; j<column_vec.size(); j++) {
        
       vector<int> col=column_vec[j];
         
       row.push_back(col[i]);
    }
    
     tran.push_back(row);
  }
  
    return tran;
}

// Complete the surfaceArea function below.
int surfaceArea(vector<vector<int>> A) {
   
      vector<vector<int>> c;
      
      vector<int> tb=A[0];
      
      vector<int> tb1=A[1];
      
      int tbs=2*tb[0]*tb[1],sum=0,size=tb1.size();
      
      for(int j=1; j<A.size(); j++) {
          
         vector<int> r=A[j]; 
          
      for(int i=0; i<r.size()-1; i++){
          
          if(i==0) { sum+=r[i]; }
          else if(i==r.size()-2) {
           
           sum+=r[r.size()-1];   
              
          }
          
          sum+=abs(r[i]-r[i+1]);  
      }

      }
      
      
      c=transpose_vector(A,size);
      
      
      
      for(int j=1; j<c.size(); j++) {
          
          vector<int> r=c[j];
          
      for(int i=0; i<r.size()-1; i++){
          
          if(i==0) { sum+=r[i]; }
          else if(i==r.size()-2) {
           
           sum+=r[r.size()-1];   
              
          }
          
            sum+=abs(r[i]-r[i+1]);  
          
      }

      }
      
      return sum+tbs;

}
