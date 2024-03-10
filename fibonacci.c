#include<stdio.h>

void main()
{

int n,t1=0,t2=1,fib;
    printf("Enter a Number  : \a");
    scanf("%d",&n);
    
for(int i=1;i<=n;i++){
    fib=t1+t2;
    t1=t2;
    t2=fib;
    printf("%d, ",fib);}    
    
}