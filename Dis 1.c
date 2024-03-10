#include<stdio.h>
#include<conio.h>
void main()
{
int q,tc,wdis,dis;
    printf(" <<< Enter A Quantity >>> : \t");
    scanf("%d",&q);
    if(q>=500){
    wdis=q*10;
    dis=wdis/10;
    tc=wdis-dis;
    printf("*** The Cost Without Discount :  %d\n",wdis);
    printf("*** The Total Cost With (Discount By 10) :  %d",tc);
    }
    else
    {tc=q*10;
    printf("*** The Total Cost Without Discount is :  %d",tc);
}
getch();
}