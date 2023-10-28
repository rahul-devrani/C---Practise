#include <stdio.h>

int sum(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Sum: %d",a+b);
    return 1;

}
void main(){
    sum();

}
