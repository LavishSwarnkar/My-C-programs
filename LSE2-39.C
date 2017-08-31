//LSE2-39
//Using While loop (Prime no check)
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{    int no,i,c=0;
     clrscr();
     printf("Enter number to check if it is Prime: ");
     scanf("%d",&no);
     i=sqrt(no)+1;
     while(i>1)
     {	if(no%i--==0)
		c++;
     }
     if(c==0)
	printf("Yes,it is prime");
     else
	printf("No, it is not prime");
     getch();
}