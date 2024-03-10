#include<stdio.h>
#include<conio.h>

void main()
{
char ch;
    printf("Enter a Character  : ");
    scanf("%c",&ch);
if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
printf("...This Not Digit...\n");
printf("...%c is Character...",ch);}
else if(ch>='0' && ch<='9'){
printf("...%c is Digit...",ch);}
else
printf("...invalid Enter...");
getch();
}