//LSE2-46
//Functions (add two numbers)
#include<stdio.h>
#include<conio.h>
void add(int n1, int n2)
{       int s;
	s=n1+n2;
	printf("\n%d + %d = %d",n1,n2,s);
}
void main()
{    int n1,n2;
     clrscr();
     printf("Enter two numbers: ");
     scanf("%d %d",&n1,&n2);
     add(n1,n2);
     getch();
}