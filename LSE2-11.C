//LSE2-11
//Program illustrating use of nested conditional operator to check equality of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b,c,max;
     clrscr();
     printf("Enter three number: ");
     scanf("%d %d %d",&a,&b,&c);
     max=a>b?(a>c?a:c):(b>c?b:c);
     printf("\nAmongst the three numbers, %d, %d and %d, %d is the greatest",a,b,c,max);
     getch();
}