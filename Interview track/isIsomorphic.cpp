class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp,rmp;
        for(int i = 0; i < n; i++){
            if(mp.find(s[i]) == mp.end()){
                if(rmp.find(t[i]) == rmp.end()){
                    mp[s[i]] = t[i];
                    rmp[t[i]] = s[i];
                }
                else 
                    return false;
            }
            else
                if(mp[s[i]]!=t[i] || rmp[t[i]]!=s[i])
                    return false;
            }
        }
        return true;
    } 
};
