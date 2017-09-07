//LSE2-36E
//Using While Loop (Prime numbers upto 1000)
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{    int i,n,no,c=0;
     clrscr();

     for(i=0 ; i<=100 ; i++)
     {  no=i;
	n=sqrt(no)+1;
	while(n>1)
	{	if(no%n--==0)
		{	c++;
		}
	}
	if(c==0)
		printf("%d, ",i);
	c=0;
     }

     getch();
}
