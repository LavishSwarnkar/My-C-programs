//LSE2-34
//Using Do While Loop (series printing)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter initial and final number: ");
     scanf("%d %d",&a,&b);
     do
     {	printf("%d\n",a);
	a++;
     }while(a<=b);
     getch();
}