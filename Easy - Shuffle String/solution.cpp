class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        std::string r = s;
        for(int i = 0; i < s.size(); i++) {
            r[indices[i]] = s[i];
        }
        return r;
    }
};
