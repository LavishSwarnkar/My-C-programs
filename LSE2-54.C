//LSE2-54
//Fibonacci Series
#include<stdio.h>
#include<conio.h>
void main()
{    int x=1,y=0,z,i=1,n;
     clrscr();
     printf("Enter no. of terms: ");
     scanf("%d",&n);
     while(i<=n)
     {    z=x+y;
          printf("%d, "z);
     	     x=y;
     	     y=z;
     	     i++;
     }
	    getch();
}