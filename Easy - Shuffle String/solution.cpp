class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        std::string retStr = s;
        for(int i = 0; i < s.size(); i++) {
            retStr[indices[i]] = s[i];
        }
        return retStr;
    }
};
