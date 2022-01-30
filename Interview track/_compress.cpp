class Solution {
public:
    int compress(vector<char>& chars) {
        int counter = 0, marker = 0, sz = chars.size();
        while(counter < sz){
            int count = 0;
            char ch = chars[counter];
            while(counter < sz and chars[counter] == ch){
                counter++;
                count++;
            }
            
            chars[marker++] = ch;
            if(count == 1) continue;
            string num = to_string(count);
            for(char& n:num){
                chars[marker++] = n;
            }
        }
        
        return marker;
    }
};

