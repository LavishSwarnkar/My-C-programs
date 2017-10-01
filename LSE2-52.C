//LSE2-52
//Functions (Swapping by pass by reference)
#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y)
{	   printf("Before swapping, x=%d and y=%d",*x,*y);
     *x=*x+*y,*y=*x-*y,*x=*x-*y;
     printf("\nAfter swapping in function, x=%d and y=%d",*x,*y);
}
void main()
{    int x,y;
     clrscr();
     printf("Enter two numbers: ");
     scanf("%d %d",&x,&y);
     swap(&x,&y);
     printf("\nAfter returning from function, x=%d and y=%d",x,y);
     printf("\nNote that Values are changed in main()");
	    getch();
}