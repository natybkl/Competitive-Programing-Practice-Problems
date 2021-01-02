#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
#include <cmath>
#include<bits/char_traits.h>

using namespace std;

int main()
{
      
      string num1,num2;
      int carry=0;
      int sum=0;
      int *ptr1,*ptr2;
      
     
       cout<<"insert 1st num  \n";
       cin>>num1;
       cout<<"insert 2nd num  \n";
       cin>>num2;
       
          
    if(num1.length()>num2.length()){
    	
	 
	     while(num2.length()<num1.length()) {
	 	
	        	num2="0"+num2;
	 	
	   }     
    
}

////////////////////////////////////////////////////////////////////////////////
if(num2.length()>num1.length()){
    	
	 
	     while(num1.length()<num2.length()) {
	 	
	        	num1="0"+num1;
	 	
	   }     
    
}
        
      int p=num2.length();     
      int j=0;
      
     for(int i=p-1 ; i>=0; i-- )
    {
        
		stringstream ss1,ss2;
		int nm1,nm2;
		
		ss1<<num1[i];
		ss2<<num2[i];
		
		ss1>>nm1;
		ss2>>nm2;
			 	
    	int y= nm1 + nm2  + carry;
    	
    	
        if(y%10==y){
       	 
		sum+=(y*pow(10,j));   
		   	   
		carry=0;
		      	
	   } else if(y%10!=y){
	   	
	   	 sum+=((y%10)*pow(10,j)); 
			  
	     carry=1; 
	   	 
	   } 	  	
    	
    	j++;
	}

     if(carry!=0){
     	
     	sum=pow(10,j)+sum;
	 }
    cout<<"num1 is "<<num1<<endl;
    cout<<"num2 is "<<num2<<endl;
    cout<<"sum is  "<<sum<<endl;

 
  return 0;
  
}

