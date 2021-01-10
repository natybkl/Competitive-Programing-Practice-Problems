#include <bits/stdc++.h> 

using namespace std;



bool isSmaller(string str1, string str2)
{

    int n1 = str1.length(), n2 = str2.length();
 

    if (n1 < n2)

        return true;

    if (n2 < n1)

        return false;
 

    for (int i = 0; i < n1; i++)

        if (str1[i] < str2[i])

            return true;

        else if (str1[i] > str2[i])

            return false;
 

    return false;
}
 
string findDiff(string str1, string str2)
{

  
    if (isSmaller(str1, str2))

        swap(str1, str2);
 

    string str = "";
 
    int n1 = str1.length(), n2 = str2.length();
 
    reverse(str1.begin(), str1.end());

    reverse(str2.begin(), str2.end());

    int carry = 0;
 
    for (int i = 0; i < n2; i++) {

        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);
    
        if (sub < 0) {

            sub = sub + 10;

            carry = 1;

        }

        else

            carry = 0;
 

        str.push_back(sub + '0');

    }
 

    for (int i = n2; i < n1; i++) {

        int sub = ((str1[i] - '0') - carry);
 

        if (sub < 0) {

            sub = sub + 10;

            carry = 1;

        }

        else

            carry = 0;
 

        str.push_back(sub + '0');

    }
 

    reverse(str.begin(), str.end());
 

    return str;
}
                 
                            
                            
int main()
{
      
      string num1,num2;
      
      int carry=0,sum=0;
      
      bool isneg=false;
     
      cout<<"insert 1st num  \n";
      
      cin>>num1;
      
      cout<<"insert 2nd num  \n";
      
      cin>>num2;
       
       
       
  if(num1[0]=='-' || num2[0]=='-' ) {
  	
  	    if(num1[0]=='-') {
		
		num1.erase(num1.begin());
		
		isneg=true;
		
	} 
	
     	if(num2[0]=='-') {
		
		num2.erase(num2.begin());
		
		isneg=true;
		
	}
  	   
  	   cout<<"sum is: "<<findDiff(num1,num2)<<endl;
  	
  } else if(isneg==false) {
  
          
       if(num1.length()>num2.length()){
    	
	 
	     while(num2.length()<num1.length()) {
	 	
	        	num2="0"+num2;
	 	
	   }     
    
}


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

}
  return 0;
  
}
