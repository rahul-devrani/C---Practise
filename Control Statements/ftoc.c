#include<stdio.h>
void main(){
    float fahr, celsius;
    printf("Enter the temperature in fahrenheit: ");
    scanf("%f", &fahr);
    celsius = (fahr - 32) * 5 / 9;
    printf("The temperature in celsius is: %f", celsius);
    }
