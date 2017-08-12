//LSE2-14
//Program to convert temprature in°F to °C
#include<stdio.h>
#include<conio.h>
void main()
{    float F,C;
     clrscr();
     printf("Enter temprature in °F: ");
     scanf("%f",&F);
     C=(F-32)/1.8;
     printf("\n%f°F=%f°C",F,C);
     getch();
}