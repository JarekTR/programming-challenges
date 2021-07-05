int romanToInt(char* s) {
  int count = 0;
  int temp = 0;
  for (*s; *s != '\0'; s++) {
    switch (*s) {
      case 'I':
        temp = (s[1] == 'V' || s[1] == 'X') ? -1 : 1;
        break;
      case 'X':
        temp = (s[1] == 'L' || s[1] == 'C') ? -10 : 10;
        break;
      case 'C':
        temp = (s[1] == 'D' || s[1] == 'M') ? -100 : 100;
        break;
      case 'V':
        temp =  5;
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
