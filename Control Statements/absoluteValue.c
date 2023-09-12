#include <stdio.h>
void main(){
    int i;
    printf("Enter a Number: ");
    scanf("%d",&i);
    if(i<0){
        i=-i;
    }
    printf("Absolute Value: %d",i);}