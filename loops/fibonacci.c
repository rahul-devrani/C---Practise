#include<stdio.h>

int main(){
int a=1,b=2,c,i;
printf("%d %d %d %d",0,1,1,2);
for(i=5;i<10;i++){   
    printf("%d ",a+b);
    c=b;
    b=a+b;
    a=c;
}
return 0;
}