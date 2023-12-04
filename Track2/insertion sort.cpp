
#include <bits/stdc++.h>

using namespace std;


int main() {
    
    
   srand(unsigned(time(nullptr)));
   vector<int> v(10);
   int itr=0,limit=1;
   generate(v.begin(), v.end(), rand);
   
   for(int i=0; i<v.size(); i++)
   { v[i]=v[i]%10; }
   
   cout<<"before sorting: "<<endl;
   
   for(int i=0; i<v.size(); i++)
   {cout<<v[i]<<" ";}
       
   
       
        for(int j=1; j<v.size(); j++) {
           
            int x=j-1;
            int p=j;
            int val=v[j];
   
            
           while(x>=0) {
               
               if(val<v[x]){ swap(v[x],v[x+1]);} 
               
               else{ break;}
               x--; 
           }
            
       }
       
   
   
   cout<<"\nafter sorting: "<<endl;
   for(int x=0; x<v.size(); x++)
  { cout<<v[x]<<" "; }
   
}
