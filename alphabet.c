#include<stdio.h>    
#include<stdlib.h>  

void main(){  

  int ch=65;    
  int i,j,k,m,n;    

  system("cls");  
printf("Enter a Range To Print Alphabets Triangle  : ");
scanf("%d",&n);

    for(i=1;i<=n;i++)    
    {    
        for(j=5;j>=i;j--)    
            printf("  ");    

        for(k=1;k<=i;k++)    
            printf("%c",ch++);    
            ch--;    

        for(m=1;m<i;m++)    
            printf("%c",ch--);    

        printf("\n");    
        ch=65;    
     }   } 
