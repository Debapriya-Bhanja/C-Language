//write a program to check whether (Temperature, Humidity) in a city

#include <stdio.h>

struct Weather {
    char city[20];
    float temperature;
    int humidity;
};

int main() {
    struct Weather W;

    
    printf("Enter City name: ");
    scanf(" %[^\n]", W.city);

    printf("Enter Temperature: ");
    scanf("%f", &W.temperature);

    printf("Enter Humidity (in %%): ");
    scanf("%d", &W.humidity);

    
    printf("\n-----Weather Report-----\n");

    printf("City: %s\n", W.city);
    printf("Temperature in Centigrade: %.3f\n", W.temperature);
    printf("Humidity: %d%%\n", W.humidity);

    return 0;
}