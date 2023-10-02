class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
      stack<int> s;
      string m="*";
      string d="/";
      string a="+";  
      string sb="-"; 
   
     for(int i=0;i<tokens.size(); i++) {
          
    if(tokens[i]!=m && tokens[i]!=a && tokens[i]!=sb && tokens[i]!=d){  
      
       stringstream ss;
        
       ss<<tokens[i];
        
       int si;
        
       ss>>si;
        
       s.push(si);
        
    } else if(tokens[i]==m){
     
    int ft=s.top();

        s.pop();

    int sd=s.top();
     
        s.pop();
          
    int ar=ft*sd;

    s.push(ar);
              
    }else if(tokens[i]==d){
        
    int ft=s.top();
        
          s.pop();
        
    int sd=s.top();
        
          s.pop();
              
     int ar=sd/ft;

       s.push(ar);  
        
    } else if ( tokens[i]==a){
        
    int ft=s.top();
        
        s.pop();
        
    int sd=s.top();
        
        s.pop();
        
    int ar=ft+sd;

      s.push(ar);
        
    } else if ( tokens[i]==sb) {
        
    int ft=s.top();

        s.pop();
        
    int sd=s.top();
        
        s.pop();
    
    int ar=sd-ft;

    s.push(ar);

}  
                 
      } 
        
    return s.top();    
    }
};
