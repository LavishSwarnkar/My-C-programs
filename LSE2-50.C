//LSE2-50
//Functions (square of a number)
#include<stdio.h>
#include<conio.h>
int sq(int n);
void main()
{    int n;
     clrscr();
     printf("Enter a number to print its square: ");
     scanf("%d",&n);
     printf("%d^2 = %d",n,sq(n));
     getch();
}
int sq(int n)
{       return n*n;
}
