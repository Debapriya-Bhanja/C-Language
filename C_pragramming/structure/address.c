//Create a structure Address with members: house_no, city, state, and pin. Create another structure Person which includes name, age, and an Address variable. Write a program to input and display data.


#include <stdio.h>

struct Address {
    int house_no;
    char city[30];
    char state[30];
    int pin;
};

struct Person {
    char name[50];
    int age;
    struct Address addr;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    gets(p.name);
    printf("Enter age: ");
    scanf("%d", &p.age);
    printf("Enter house number: ");
    scanf("%d", &p.addr.house_no);
    printf("Enter city: ");
    scanf(" %[^\n]", p.addr.city);
    printf("Enter state: ");
    scanf(" %[^\n]", p.addr.state);
    printf("Enter pin: ");
    scanf("%d", &p.addr.pin);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\nAge: %d\nAddress: House No %d, %s, %s - %d\n",
        p.name, p.age, p.addr.house_no, p.addr.city, p.addr.state, p.addr.pin);

    return 0;
}