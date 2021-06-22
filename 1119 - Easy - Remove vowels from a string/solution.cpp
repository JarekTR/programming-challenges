class Solution {
  public:
  std::string removeVowels(std::string s) {
    std::string result = "";
    for (std::string::iterator it = s.begin(); it < s.end(); it++) {
      switch (*it) {
        case 'a':
          break;
        case 'e':
          break;
        case 'i':
          break;
        case 'o':
          break;
        case 'u':
          break;
        default:
          result.push_back(*it);
          break;
      }
    }
    return result;
  }
};
