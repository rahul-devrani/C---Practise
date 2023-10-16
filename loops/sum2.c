#include <stdio.h>
void main(){
    int num;
    printf("Enter the number:");
    scanf("%d", &num);

while(num > 9){
            int res =0;
            while(num > 0){
                res += num%10;
                num /= 10;
            }
            num = res;
        }

        printf("%d",num);

    }