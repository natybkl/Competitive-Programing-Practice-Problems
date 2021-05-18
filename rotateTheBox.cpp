class Solution {
public:
 vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
    int r = box.size(), c = box[0].size();
    vector<vector<char>> res(c--,vector<char>(r--,'.'));
    for(int i=0; i<=r; i++){
       int dyi=c,sti=c;
       while(dyi >= 0){
           if(box[i][dyi] == '*'){
               res[dyi][r-i] = '*';
               sti=dyi-1;
          }else if(box[i][dyi] == '#'){
               res[sti][r-i] = '#';
               sti--;
          }
           dyi--;
        }
    }
        return res;
        
    }
};
