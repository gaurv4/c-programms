#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
int k=0,result=0; 
int menu(){ int ch; 
printf("\n1.Add"); 
printf("\n2.Sub"); 
printf("\n3.Mul"); 
printf("\n4.Div"); 
printf("\n5.GetRim"); 
printf("\n6.Clear"); 
printf("\n7.Exit"); 
printf("\nEnter your choice:"); 
scanf("%d",&ch); return(ch); } 
void Add(){ int a,b; 
if(k){ printf("\nEnter a number: "); 
scanf("%d",&a); 
result+=a; printf("\nResult=%d",result); }
 else{ printf("\nEnter two number: "); 
scanf("%d%d",&a,&b); result=a+b; printf("\nresult=%d",result); } } 
void Sub(){ int a,b; 
if(k){ printf("\nEnter a number: "); 
scanf("%d",&a); result-=a; 
printf("\nResult=%d",result); } 
else{ printf("\nEnter two number: "); 
scanf("%d%d",&a,&b); result=a-b; 
printf("\nresult=%d",result); } } 
void Mul(){ int a,b; if(k){ 
printf("\nEnter a number: "); 
scanf("%d",&a);
 result*=a; 
printf("\nResult=%d",result); } 
else{ printf("\nEnter two number: "); 
scanf("%d%d",&a,&b); 
result=a*b; 
printf("\nresult=%d",result); } }
 void Div(){ int a,b; if(k){ printf("\nEnter a number: ");
 scanf("%d",&a); 
result/=a; 
printf("\nResult=%d",result); }
 else{ printf("\nEnter two number: "); 
scanf("%d%d",&a,&b); result=a/b; 
printf("\nresult=%d",result); } }
 void Rim(){ int a,b; 
if(k){ printf("\nEnter a number: "); 
scanf("%d",&a);
 result%=a; 
printf("\nResult=%d",result); }
 else{ printf("\nEnter two number: "); 
scanf("%d%d",&a,&b);
 result=a%b; 
printf("\nresult=%d",result); } } 
void Clear(){ 
printf("\nOld Data Cleared");
 result=0; k=0; }
 void main(){
 int l=0; 
while(1){
clrscr();
 printf("\n\n Old Result=%d",
result);
 switch(menu()){
 case 1: 	Add(); 	k=1; 	break;
 case 2: 	Sub(); 	k=1; 	break; 
case 3: 	Mul(); 	k=1; 	break; 
case 4: 	Div(); 	k=1; 	break; 
case 5: 	Rim(); 	k=1; 	break;
 case 6: 	 Clear(); 	 break;
 case 7: 	 l=1; 	 break; default: 	
 printf("\nInvalid choice"); }}}//end of switch if(l==1) break; getch(); }//end of while }//end of main 

    