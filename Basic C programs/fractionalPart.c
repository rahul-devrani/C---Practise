#include<stdio.h>
void main(){
    float n,m;
    printf("Enter a number: ");
    scanf("%f",&n);
    int i=n;
    m=n-i;
    
    printf("The fractional part of %f is %f",n,m);}