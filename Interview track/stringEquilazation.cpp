#include<bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vc vector<char>
#define vvi vector<vector<int>>
#define vvc vector<vector<char>>

using namespace std;

int main(){
    int q;
    cin >> q;
    while(q--){
        string s,t;
        cin >> s >> t;
        unordered_set<char> ck;
        for(char c:s)
            ck.insert(c);
            
        bool skip = false;
        for(int i = 0; i < s.size(); i++){
            if(ck.find(t[i]) != ck.end()){
                cout << "YES" << "\n";
                skip  = 1;
                break;
            }
        }
        
        if(!skip) cout << "NO" << "\n";
    }
}
