class Solution {
	
public:
	
int largestPerimeter(vector<int>& A) {    

     double p=0,s,a;
     int i=0, dif=0;
     vector<int> per;
     vector<int>:: iterator it;
     it=A.begin();
     bool push;
        
    while(per.size()<=3) {
    	
    int maxval=max_element(A.begin(), A.end())-A.begin();
     
    if(i==0 || dif-A[maxval]>0) { 
    
       p+=A[maxval]; push=true;
       
       }
	   
	   else{ 
		
		push =false;
		
		}
       
    if(push==true) {
    	
        per.push_back(A[maxval]);
     
     }

    if(i==0) { 
	
     	dif+=A[maxval]; }   
	
	
	else if(push=true && i!=0)
	
	{
	
    	dif-=A[maxval];
	
	}
        
        A.erase(it+maxval);
       
        i++;
    }   
    
      s=p/2;
        
      a=s*(s-per[0])*(s-per[1])*(s-per[2]);
       
        if(a!=0){ return p;} else { return 0;}
        
    }
};




class Solution {
	
public:
	
int largestPerimeter(vector<int>& A) {
	
        sort(A.begin(), A.end());
        
        bool found=false;
        
        int i=0, j=0,k=A.size()-1, per=0;
     
        while(found==false && k>=0)
    {
           
    if(A[A.size()-i-3]<(A[A.size()-1]+A[A.size()-2])) {
        
       per+=A[A.size()-1]+A[A.size()-2]+A[A.size()-i-3];
       found=true;  
        
        break;
    }        
         k--; i++;   
    }
        
      if(found==false){
        
          return 0;
      } else { 
      
         return per;
      
      }
        
    }
};








class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        
    sort(A.begin(), A.end());
        
    bool found=false;
        
    int per=0;
        
    for(int k=A.size()-1; k>=0; k--){
       
      for(int x=k-1; x>=0; x--) {
       
        for(int y=x-1; y>=0; y--) {
            
       if((A[k]>=A[x]+A[y])||(A[x]>=A[k]+A[y])||(A[y]>=A[x]+A[k])) {} 
	   
	   else {
          
                per+=A[k]+A[x]+A[y]; 
           
                found=true;   
				  
                break;
           }
            
       }
         
       if(found==true){ break;}
     } 
       if(found==true){ break;}
   }     
        
        
        
   if(found==false) {
        
          return 0;
          
      } else { 
      
         return per;
      
      }
        
         
    }
};

