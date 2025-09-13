#include <string.h>

int isSubstring(char s1[], char s2[]) {
    if(strstr(s2, s1) != NULL) 
      return 1;
    return 0;
}
