#include<stdio.h>
void main(){
    float r, v;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    v = (4.0/3.0)*3.1415*r*r*r;
    printf("The volume of the sphere is: %f", v);
}