class Solution {
 public:
  int romanToInt(string s) {
    int count = 0;
    int temp = 0;
    for (int i = 0; i < s.length(); i++) {
      switch (s[i]) {
        case 'I':
          temp = (s[i + 1] == 'V' || s[i + 1] == 'X') ? -1 : 1;
          break;
        case 'X':
          temp = (s[i + 1] == 'L' || s[i + 1] == 'C') ? -10 : 10;
          break;
        case 'C':
          temp = (s[i + 1] == 'D' || s[i + 1] == 'M') ? -100 : 100;
          break;
        case 'V':
          temp = 5;
          break;
        case 'L':
          temp = 50;
          break;
        case 'D':
          temp = 500;
          break;
        case 'M':
          temp = 1000;
          break;
      }
      count += temp;
    }
    return count;
  }
};
