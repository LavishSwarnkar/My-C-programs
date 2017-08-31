//LSE2-35
//Using For Loop (20-30 printing)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter initial and final number: ");
     scanf("%d %d",&a,&b);
     for(a=20 ; a<=b ; a++)
     {	printf("%d\n",a);
     }
     getch();
}