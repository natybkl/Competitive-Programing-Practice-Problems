
#include <bits/stdc++.h>

using namespace std;


int main() {
    
    
   srand(unsigned(time(nullptr)));
   vector<int> v(100);
   int itr=0,limit=1;
   generate(v.begin(), v.end(), rand);
   
   for(int i=0; i<v.size(); i++)
   { v[i]=v[i]%10; }
   
   cout<<"before sorting: "<<endl;
   
   for(int i=0; i<v.size(); i++)
   {cout<<v[i]<<" ";}
   
   while(itr<v.size()){
       
       for(int j=0; j<v.size()-limit; j++){
           
           if(v[j]>v[j+1]) {  swap(v[j],v[j+1]);       }
       }
       itr++; limit++;
   }
   
   cout<<"\nafter sorting: "<<endl;
   for(int x=0; x<v.size(); x++)
  { cout<<v[x]<<" "; }
   
}