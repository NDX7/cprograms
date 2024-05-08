#include <stdio.h>
#define C_SIZE 50

union person {
    char name[C_SIZE];
    char house_name[C_SIZE];
    char city_name[C_SIZE];
    char state[C_SIZE];
    char pin_code[C_SIZE];
};

int main() {
    struct person p;

    printf("Enter your name: ");
    fgets(p.name, C_SIZE, stdin);

    printf("Enter your house name: ");
    fgets(p.house_name, C_SIZE, stdin);

    printf("Enter your city name: ");
    fgets(p.city_name, C_SIZE, stdin);

    printf("Enter your state: ");
    fgets(p.state, C_SIZE, stdin);

    printf("Enter your pin code: ");
    fgets(p.pin_code, C_SIZE, stdin);

    printf("Address of person p: %p\n", &p);

    return 0;
}
