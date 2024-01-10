#include <stdio.h>
int sumOfDigits(int n){
    int sum=0;
    if(n==0){
        return 0;
    }
    else{
        int r= n%10;
        sum=sum+r;
        return sumOfDigits(n/10);
    }
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
   int res=sumOfDigits(n);
   printf("%d",res);
    return 0;
}