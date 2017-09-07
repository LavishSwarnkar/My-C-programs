//LSE2-40E
//Using While Loop (Armstrong numbers upto 1000)
#include<stdio.h>
#include<conio.h>
void main()
{    int i,n,sum,ld;
     clrscr();

     for(i=1 ; i<=1000 ; i++)
     {  n=i;
	sum=0;
	while(n!=0)
	{	ld=n%10;
		sum+=ld*ld*ld;
		n=n/10;
	}
	if(i==sum)
		printf("%d\n",i);
     }

     getch();
}
