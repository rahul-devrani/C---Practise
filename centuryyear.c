#include <stdio.h>
void main(){
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if(year%100==0){
        printf("Century year");
    }
    else{
        printf("Not a century year");
    }

}