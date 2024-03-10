#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{int n,r;
system("cls");
printf("Enter the Number : ");
scanf("%d",&n);
r=n%2;
if(r==0)
{printf("....This Is Even Number....");}
else
{printf("....This Is Odd Number....");}
getch();
}