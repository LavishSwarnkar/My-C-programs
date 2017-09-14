//LSE2-48
//Functions (add two numbers-3.0)
#include<stdio.h>
#include<conio.h>
int add(int n1, int n2);
void main()
{    int n1,n2,s;
     clrscr();
     printf("Enter two numbers: ");
     scanf("%d %d",&n1,&n2);
     s=add(n1,n2);
     printf("\n%d + %d = %d",n1,n2,s);
     getch();
}
int add(int n1, int n2)
{       int s;
	s=n1+n2;
	return s;
}
