#include<stdio.h>

void main()
{
int a,b,c,d;
float fi,p;
    printf("Math , English , Marathi , Hindi : \n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    fi=a+b+c+d;
    p=fi/4;
    printf("You Obtained Marks : %.2f",fi);
    if(p>=90&&p<100){
    printf("\n\t***Grade A+***");}
    else if(p>=80&&p<=89){
    printf("\n\t***Grade A***");}
    else if(p>=60&&p<=79){
    printf("\n\t***Grade B***");}
    else if(p>=35&&p<=59){
    printf("\n\t***Grade C***");}
    else if(p<35&&p>0){
    printf("\n\t***Grade D***");
    printf("\n\t--Fail--");}
    else{
    printf("\n\t?? Invalid Marks ??");}
    }