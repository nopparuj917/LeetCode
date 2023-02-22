#include <stdio.h>
#include <string.h>
class Solution {
public:
  bool isPalindrome(int x) {
    char str[32];
    sprintf(str, "%d", x);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
      if (str[i] != str[len - i - 1]) {
        return false;
      }
    }
    return true;
  }
};