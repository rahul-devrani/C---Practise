#include<stdio.h>
void main(){
    float p,r,t,ci;
    printf("Enter principal, rate and time: ");
    scanf("%f%f%f",&p,&r,&t);
    ci=p*(pow((1+r/100),t)-1);
    printf("Compound interest is %f",ci);
}