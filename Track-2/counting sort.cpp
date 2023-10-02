#include <bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> arr) {
    
    int max_val=*max_element(arr.begin(),arr.end());
    vector<int> count(max_val,0);
    vector<int> result;
    bool fdsame=false;
    
    for(int i=0; i<arr.size(); i++){
           
      count[arr[i]]++;
        
    }
    
    for(int i=0; i<count.size(); i++){
        
     for(int j=0; j<count[i]; j++){
         
         result.push_back(i);
         
     }   
            
    }
    
    return result;
}


int main(){
    
   srand(unsigned(time(nullptr)));
   vector<int> v(10);
   int itr=0,limit=1;
   generate(v.begin(), v.end(), rand);
   
   for(int i=0; i<v.size(); i++)
   { v[i]=v[i]%10; }
    
    cout<<"before sorting: "<<endl;
   
   for(int i=0; i<v.size(); i++)
   {cout<<v[i]<<" ";}
   
    int max_val=*max_element(v.begin(),v.end());
    vector<int> count(max_val+1,0);
    vector<int> result;
    bool fdsame=false;
    
    for(int i=0; i<v.size(); i++){
           
      // if(v[i]!=0) 
     
      count[v[i]]++; 
        
       //else { count[v[i]++]; } 
        
    }
    
    for(int i=0; i<count.size(); i++){
        
     for(int j=0; j<count[i]; j++){
         
         result.push_back(i);
         
     }   
            
    }   
    
   cout<<"\nafter sorting: "<<endl;
   for(int x=0; x<result.size(); x++)
  { cout<<result[x]<<" "; }
   
    
}
