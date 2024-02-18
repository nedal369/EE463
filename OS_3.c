#include <stdio.h>

int main() {
    char name[100];
    int age;
    char address[200];
    
    printf("Enter your full name: ");
    fgets(name, 100, stdin); // Using fgets to allow spaces in name
    
    printf("Enter your age: ");
    scanf("%d", &age);
    // Consuming the leftover newline character
    getchar();
    
    printf("Enter your address: ");
    fgets(address, 200, stdin);
    
    printf("Name: %sAge: %d\nAddress: %s\n", name, age, address);
    
    return 0;
}
