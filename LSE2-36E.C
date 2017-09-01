//LSE2-37
//Using While Loop (Palindrom numbers upto 1000)
#include<stdio.h>
#include<conio.h>
void main()
{    int i,n,rev=0;
     clrscr();

     for(i=11 ; i<=1000 ; i++)
     {  n=i;
	while(n!=0)
	{	rev=(rev*10)+(n%10);
		n=n/10;
	}
	if(i==rev)
		printf("%d\n",i);
	rev=0;
     }

     getch();
}
