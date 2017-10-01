//LSE2-53
//Biggest no. among 'n' numbers
#include<stdio.h>
#include<conio.h>
void main()
{    int n,x,i=1,max=0;
     clrscr();
     printf("Enter no. of numbers to be compared: ");
     scanf("%d",&n);
     while(i<=n)
     {	    printf("\nEnter No. #%d: ",i);
          scanf("%d",&x);
          if(max<x)
          	    max=x;
          	i++;
     }
     printf("\nBiggest no. among inputted %d numbers is %d",n,max);
	    getch();
}