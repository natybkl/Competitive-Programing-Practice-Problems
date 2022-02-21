void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int larger = i, left = i*2 + 1, right = i*2 + 2;
      if(left < n and arr[left] > arr[larger]){
          larger = left;
      }
      
      if(right < n and arr[right] > arr[larger]){
          larger = right;
      }
      
      if(larger != i){
          swap(arr[i], arr[larger]);
          heapify(arr, n, larger);
      }
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
        for(int i = n - 1; i >= 0; i--){
            heapify(arr, n, i);
        }
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        //code here
        buildHeap(arr, n);
        
        for(int i = n - 1; i >= 0; i--){
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
