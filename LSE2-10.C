//LSE2-10
//Program illustrating use of conditional operator
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     printf("Enter two number: ");
     scanf("%d %d",&a,&b);
     printf("\nAmongst the two numbers, %d and %d, ");
     a>b?printf("%d is greater",a):printf("%d is greater",b);
     getch();
}