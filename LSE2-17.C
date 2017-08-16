//Lavish Swarnkar Program#17
//Using Bitwise Operators
#include<stdio.h>
#include<conio.h>
void main()
{    int x,y;
     clrscr();
     printf("Enter values of x and to do binary bitwise operations, unary operations will be performed on x:");
     scanf("%d %d",&x,&y);
     printf("\nx=%d \ny=%d",x,y);
     printf("\nOR: x | y = %d | %d = %d",x,y,x|y);
     printf("\nXOR: x ^ y = %d ^ %d = %d",x,y,x^y);
     printf("\nAND: x & y = %d & %d = %d",x,y,x&y);
     printf("\nNOT: !x = !%d = %d",x,!x);
     printf("\nLEFT-SHIFT: x<<1 = %d<<1 = %d",x,x<<1);
     printf("\nRIGHT-SHIFT: x>>1 = %d>>1 = %d",x,x>>1);
     getch();
}