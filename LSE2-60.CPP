//LSE2-60
//Printing Multiplication Table of a Number
#include<stdio.h>
#include<conio.h>
void main()
{   int i,n;
    clrscr();
    printf("Enter no. whose table is to be printed: "),scanf("%d",&n);
    printf("Table of %d: \n",n);
    for(i=1 ; i<=10 ; i++)
         printf("%d X %d = %d\n",n,i,n*i);
    getch();
}
