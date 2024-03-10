/*Programe For Simple Interest*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


void main()
{
    system("cls");
    int p,t;
    float r;
    printf("Enter a Principle Value : ");
    scanf("%d",&p);
    printf("Enter The Rate : ");
    scanf("%f",&r);
    printf("Enter The Time : ");
    scanf("%d",&t);
    float si = (p*r*t)/100;
    printf("Simple Interest Is : %.2f",si);
    getch();
}