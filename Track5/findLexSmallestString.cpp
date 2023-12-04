class Solution {
public:
	string rotate(string s,int b) {
		return s.substr(s.size()-b) + s.substr(0,s.size() - b);
	}

	char plus(int i, int a){
		int num = (i + a) % 10;
	    stringstream ss;
	    string s;
	    ss << num;
	    ss >> s;
	    return s[0];
	}
	
	string add(string s,int a){
		int i = 1;
		while(i < s.size()) { 
			s[i] = plus(s[i]-'0',a);
			i += 2;
		}
		
		return s;
	}

	string findLexSmallestString(string s,int a,int b){
		set<string> strs;
		Solution *sol = new Solution();
		queue<string> q;
		q.push(s);
		strs.insert(s);
		
		while(q.size()){
			string st = q.front();
			q.pop();
			string sr = rotate(st,b);
			string sa = add(st,a);
			if(strs.find(sr) == strs.end()){
				q.push(sr);
				strs.insert(sr);
			}
			
			if(strs.find(sa) == strs.end()){
				q.push(sa);
				strs.insert(sa);
			}
				
		}
		
		return *(strs.begin());
	}

};
