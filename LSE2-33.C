//LSE2-33
//Using While Loop (20-30 printing)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter initial and final number: ");
     scanf("%d %d",&a,&b);
     while(a<=b)
     {	printf("%d\n",a);
	a++;
     }
     getch();
}
