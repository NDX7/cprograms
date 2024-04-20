#include <stdio.h>

int main() {
  char s1[100], s2[100];
  int i = 0, j = 0, flag = 1;

  // read first string until $ symbol is encountered
  while (s1[i-1] != '$' || flag) {
    s1[i] = getchar();
    if(s1[i] != '$')
      i++;
    else
      flag = 0;
  }

  // read second string until $ symbol is encountered
  flag = 1;
  while (s2[j-1] != '$' || flag) {
    s2[j] = getchar();
    if(s2[j] != '$')
      j++;
    else
      flag = 0;
  }

  // concatenate s2 to s1
  for (int k = 0; s2[k] != '\0'; k++, i++) {
    s1[i] = s2[k];
  }

  // terminating the s1 string
  s1[i] = '\0';

  printf("Concatenated string: %s\n", s1);

  return 0;
}
