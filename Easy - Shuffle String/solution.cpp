
#include <string>
#include <vector>
class Solution {
public:
    std::string restoreString(std::string s, std::vector<int>& indices) {
        int x;
        std::string retString = s;
        for(int i = 0; i < s.size(); i++) {
            x = indices[i];
            retString[x] = s[i];
        }
        return retString;
    }
};
