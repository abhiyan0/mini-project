#include <stdio.h>

void celsiusToFahrenheit() {
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
}

void fahrenheitToCelsius() {
    double fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2lf Fahrenheit = %.2lf Celsius\n", fahrenheit, celsius);
}

int main() {
    int choice;
    
    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Choose an option (1 or 2): ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            celsiusToFahrenheit();
            break;
        case 2:
            fahrenheitToCelsius();
            break;
        default:
            printf("Invalid choice! Please enter 1 or 2.\n");
    }
    
    return 0;
}

