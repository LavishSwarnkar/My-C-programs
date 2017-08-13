//Binary to decimal number conversion
//Made by Lavish Swarnkar
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{    int N=0,R,base=0;
     unsigned long bin,temp;
     clrscr();
     printf("Enter the binary number whose decimal equivalent is required: ");
     scanf("%ld",&bin);
     temp=bin;
     while(bin>0)
     {    R=bin%10;
          bin=bin/10;
          N+=R*pow(2,base);
          base++;
     }
     printf("The decimal equivalent of binary number %ld is %d",temp,N);
     getch();
}
