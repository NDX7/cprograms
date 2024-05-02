#include <stdio.h>
#include <string.h>

#define C_SIZE 50

union Address {
    char Name[C_SIZE];
    char HouseName[C_SIZE];
    char CityName[C_SIZE];
    char State[C_SIZE];
    char PinCode[C_SIZE];
};

int main() {
    union Address addr;

    printf("Enter Name: ");
    fgets(addr.Name, C_SIZE, stdin);
    addr.Name[strlen(addr.Name) - 1] = '\0'; // remove newline character

    printf("Enter House Name: ");
    fgets(addr.HouseName, C_SIZE, stdin);
    addr.HouseName[strlen(addr.HouseName) - 1] = '\0'; // remove newline character

    printf("Enter City Name: ");
    fgets(addr.CityName, C_SIZE, stdin);
    addr.CityName[strlen(addr.CityName) - 1] = '\0'; // remove newline character

    printf("Enter State: ");
    fgets(addr.State, C_SIZE, stdin);
    addr.State[strlen(addr.State) - 1] = '\0'; // remove newline character

    printf("Enter Pin Code: ");
    fgets(addr.PinCode, C_SIZE, stdin);
    addr.PinCode[strlen(addr.PinCode) - 1] = '\0'; // remove newline character

    printf("\nAddress:\n");
    printf("Name: %s\n", addr.Name);
    printf("House Name: %s\n", addr.HouseName);
    printf("City Name: %s\n", addr.CityName);
    printf("State: %s\n", addr.State);
    printf("Pin Code: %s\n", addr.PinCode);

    return 0;
}
