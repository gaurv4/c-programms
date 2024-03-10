#include<stdio.h>

void main()
{
   int a=5,b=10;

printf("The Numbers Before Swapping  : a = %d & b = %d",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
printf("\nThe Numbers After Swapping  : a = %d & b = %d",a,b);   
}