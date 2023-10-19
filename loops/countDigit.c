#include <stdio.h>
void main(){    
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
      int ans = 0;
    int cur = num;
    while (cur) {
        if (num % (cur % 10) == 0) {
            ans++;
        }
        cur /= 10;
    }
    printf("%d",ans);

}