/*Lavish Swarnkar E2*/
//Simple Intrest
#include<conio.h>
#include<stdio.h>
void main()
{       float p,r,t,si;
	clrscr();
	printf("Enter Principal amount, Rate and Time(in years): ");
	scanf("%f %f %f",&p,&r,&t);
	si=(p*r*t)/100;
	printf("\nSimple interest on Rs.%f at rate %f after %f years is Rs.%f",p,r,t,si);
	getch();
}