//Write a C program that displays the n terms of square natural numbers and their sum.
//The series is as below:
//1 4 9 16 ... n Terms

#include <stdio.h>

void main()
{
   int i,n,sum=0;
   printf("Input the number of terms : ");
   scanf("%d",&n);
   printf("\nThe square natural upto %d terms are :",n);
   for(i=1;i<=n;i++)
   {
     printf("%d  ",i*i);
     sum+=i*i;
   }
   printf("\nThe Sum of Square Natural Number upto %d terms = %d \n",n,sum);
}
