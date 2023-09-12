#include <stdio.h>
void main(){
    int i;
    printf("Enter a Number: ");
    scanf("%d",&i);
    if(i%5==0){
        printf("Divisible by 5");
    }
    else{
        printf("Not divisible by 5");
    }
}