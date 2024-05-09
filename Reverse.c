#include<stdio.h>
#include<string.h>

char *rev_string(char *str)
{
    int len = strlen(str);
    int i;
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    return str;
}

int main() 
{
    char str[50];
    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0'; // remove the newline character
    char *rev = rev_string(str);
    printf("Reversed String is: %s\n", rev);
    return 0;
}
