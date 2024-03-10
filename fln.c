#include<stdio.h>
#include<conio.h>
#include<conio.h>
void main(){
    int a,b,c;
   system("cls");
    printf("Enter Three Numbers  : ");
    scanf("%d %d %d",&a,&b,&c);
if(a>b){
    if(a>c){
        printf("%d Is Largest Number...\n",a);
    }
    else{
        printf("%d Is Largest Number...\n",c);
    }
} 
else if(b>c){
    printf("%d Is Largest Nuumber...\n",b);
}  
else printf("%d is Largest Number...\n",c);
getch(); 
}