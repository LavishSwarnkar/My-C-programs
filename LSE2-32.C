//LSE2-32
//Using Switch Case (Mini Calculator)
#include<stdio.h>
#include<conio.h>
void main()
{    char op;
     int a,b,res,f=0;
     clrscr();
     printf("Enter operation (+ - * / %): ");
     scanf("%c",&op);
     printf("Enter two numbers on which operation is to be performed: ");
     scanf("%d %d",&a,&b);
	switch(op)
     {    case '+': res=a+b; f=1;	break;
	  case '-': res=a-b; f=1;	break;
	  case '*': res=a*b; f=1;	break;
	  case '/': res=a/b; f=1;	break;
	  case '%': res=a%b; f=1;	break;
	  default: printf("Invalid operator");
     }
     if(f)
	printf("%d %c %d = %d",a,op,b,res);
     getch();
}