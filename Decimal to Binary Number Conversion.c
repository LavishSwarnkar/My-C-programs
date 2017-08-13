//Decimal to binary number conversion
//Made by Lavish Swarnkar
#include<stdio.h>
#include<conio.h>
void main()
{    int N,temp,R;
     unsigned long bin=0,base=1;
     clrscr();
     printf("Enter the decimal number whose binary equivalent is required: ");
     scanf("%d",&N);
     temp=N;
     while(N!=0)
     {    R=N%2;
          N=N/2;
          bin+=R*base;
          base*=10;
     }
     printf("The binary equivalent of decimal number %d is %ld",temp,bin);
     getch();
}

