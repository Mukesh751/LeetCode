class Solution {
public:
    map<int,string> m;
    int i = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[i]=longUrl;
        string k = to_string(i);
        i++;
        return k;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int z = stoi(shortUrl);
        return m[z];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));