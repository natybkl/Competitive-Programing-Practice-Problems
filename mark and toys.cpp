int maximumToys(vector<int> v, int k) {
 
        int sum=0,i=0,count=0;
        
         sort(v.begin(),v.end());
        while(sum<=k){
            
           // min=*min_element(v.begin(),v.end());
          //  min_index=min_element(v.begin(),v.end())-v.begin();
            sum+=v[i];
            count++;
          // v.erase(min_index);
            i++;
        } 
        
        if(sum>k){ count--; }
        
   return count;
}
