//LSE2-40
//Armstrong No. Check
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{    int n,num,ld,sum=0;
     clrscr();
     printf("Enter a number to check if it is armstrong or not: ");
     scanf("%d",&n);
     num=n;
     while(n!=0)
     {	ld=n%10;
	sum+=ld*ld*ld;
	n=n/10;
     }
     if(num==sum)
	printf("The number you entered is an armstrong number");
     else
	printf("The number you entered is not an armstrong number");
     getch();
}