//LSE2-19
//Program to check whether a person is eligible to vote or not
#include<stdio.h>
#include<conio.h>
void main()
{    int age;
     clrscr();
     printf("Enter your age (years): ");
     scanf("%d",&age);
     if(age>=18)
     {	printf("\nCongrats! You are eligible to vote.");
     }
     else
     {	printf("\nOops! You are not eligible to vote.");
     }
     getch();
}