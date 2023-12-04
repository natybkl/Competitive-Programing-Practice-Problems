vector<int> countingSort(vector<int> arr) {
    
    int max_val=*max_element(arr.begin(),arr.end());
    vector<int> count(max_val+1,0);
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
