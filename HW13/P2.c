#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 10

char *SwitchCase(char *s);
int main(int argc, char* argv[]) {
  char *str; //List of characters to be sorted

  str = argv[1];
  printf("%s", SwitchCase(str));

  return 0;
}
/* Do not modify above */

char *SwitchCase(char *s) {
  /* Write your code below */
  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z') {
      s[i] += 32;
    }
    else if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= 32;
    } }

  return s; 
  }
