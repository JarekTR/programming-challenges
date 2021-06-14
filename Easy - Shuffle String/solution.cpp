class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int x;
        std::string retString = s;
        for(int i = 0; i < s.size(); i++) {
            x = indices[i];
            retString[x] = s[i];
        }
        return retString;
    }
};

// I love you mom!
