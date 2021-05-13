class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
    	int count  = 0, i = 0, num = 0;
	while(i < arr.size()) {
		while(arr[i] != num) {
			i++;
			if(i == arr.size())
				break;
}
count++;
sort();
num = ++i;
}

return count;
    }
};
