class Solution {
public:
  
    string solve(int &i, string &s) {
	string result;
	while(i < s.size() && s[i] != ']') {
		if(s[i] >= 'a' && s[i] <= 'z')
			result += s[i++];
		else {
			int n = 0;
			while(s[i] >= '0' && s[i] <= '9')
				n = n * 10 + s[i++] - '0';
			i++;
			string str = solve(i, s);
			for(int j = 0; j < n; j++)
				result += str;
			i++;
		}
	}
	return result;
}

string decodeString(string s) {
	int i = 0;
	return solve(i, s);
}
};