class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;

	for (char c : allowed) {
		s.insert(c);
	}

	int count = 0;

	for (int i = 0; i < words.size(); i++) {

		bool flag = true;
		for (int j = 0; j < words[i].length(); j++) {

			if (s.find(words[i][j]) == s.end()) {
				flag = false;
				break;
			}
		}

		if (flag)
			count++;
	}

	return count;
    }
};