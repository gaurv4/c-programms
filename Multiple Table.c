#include<stdio.h>

void main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
    printf("  %d X %d = %d  \n",n,i,n*i);
    }
    
}