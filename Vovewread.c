#include <stdio.h>

int main() {
  char string[100];
  int i, vowel = 0, consonant = 0, space = 0;

  printf("Enter a string ending with a $ symbol: ");
  fgets(string, sizeof(string), stdin);
  string[strcspn(string, "$")] = '\0'; // remove the $ symbol

  for (i = 0; string[i] != '\0'; i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
        string[i] == 'o' || string[i] == 'u' ||
        string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
        string[i] == 'O' || string[i] == 'U') {
      vowel++;
    } else if (string[i] >= '0' && string[i] <= '9') {
      // ignore digits
    } else if (string[i] == ' ') {
      space++;
    } else {
      consonant++;
    }
  }

  printf("Number of vowels: %d\n", vowel);
  printf("Number of consonants: %d\n", consonant);
  printf("Number of spaces: %d\n", space);

  return 0;
}
