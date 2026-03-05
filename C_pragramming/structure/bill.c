//Write a program to pass a structure to a function. The structure should contain product details: ID, name, and price. And add total price of n number of items which a user buy


#include <stdio.h>

struct Product {
    int id;
    char name[50];
    float price;
};

int main() {
    int n, i;
    float total = 0;

    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product items[n];

    // Input product details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of product %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &items[i].id);
        printf("Name: ");
        scanf(" %[^\n]", items[i].name);
        printf("Price: ");
        scanf("%f", &items[i].price);
    }

    // Display product details and calculate total
    printf("\n--- Product Details ---\n");
    for(i = 0; i < n; i++) {
        printf("ID: %d\n", items[i].id);
        printf("Name: %s\n", items[i].name);
        printf("Price: %.2f\n\n", items[i].price);
        total += items[i].price;
    }

    printf("Total price of all products: %.2f\n", total);

    return 0;
}