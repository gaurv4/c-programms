#include<stdio.h>

int main()
{
long long int fact;
int num=1,c=1;
    printf("Enter a Number For Calculate Factorial  : \a");
    scanf("%d",&num);
while(c<=num)
{
if(fact=c*fact)
c++;}
printf("\n\t-- The Factorial Of %d is  : %ld --\a\n\n",num,fact);
    return 0;
}