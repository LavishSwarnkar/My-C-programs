//LSE2-36
//Using While Loop (Palindrom check & Reverse of a number)
#include<stdio.h>
#include<conio.h>
void main()
{    int n,no,rev=0;
     clrscr();
     printf("Enter a number to print its reverse: ");
     scanf("%d",&n);
     no=n;
     while(n!=0)
     {	rev=(rev*10)+(n%10);
	n=n/10;
     }
     printf("Reverse of %d is %d",no,rev);
     if(no==rev)
	printf("\nIt is Palindrom");
     else
	printf("\nIt is not a Palindrom");
     getch();
}