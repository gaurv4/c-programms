#include<stdio.h>
void main()
{
int joi,curr,bo;
float besal,hra,da;
printf("Enter The Year of Joining & Current Year  :\t\a");
scanf("%d %d",&joi,&curr);
bo=curr-joi;
if(bo>=5){
printf("\v\t\tCongratution!!\n\tYou are Eligible For Bonus!!\n\a");
printf("\nEnter Your Basic Salary  :\t\a");
scanf("%f",&besal);
if(besal<1500){
hra=besal/100*10;
da=besal/100*90;
printf("\v\t-- You Received HRA  : %.2f --",hra);
printf("\n\t-- You Received DA  : %.2f --\v",da);}
else if(besal>=1500){
hra=500;
da=besal/100*98;
printf("\v\t-- You Received HRA  : %.2f --",hra);
printf("\n\t-- You Received DA  : %.2f --\v",da);}
printf("\n\t-- Gross Salary Is  : %.3f --\v",besal+hra+da);}
else{
printf("\v\tSorry!!\nYou are Not eligible for Bonus!!\n\a");}
printf("\n\t\t--- Submitted By Gaurav ---\n");

}