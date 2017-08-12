//LSE2-13
//Program to convert temprature in°C to °F
#include<stdio.h>
#include<conio.h>
void main()
{    float F,C;
     clrscr();
     printf("Enter temprature in °C: ");
     scanf("%f",&C);
     F=(1.8*C)+32;
     printf("\n%f°C=%f°F",C,F);
     getch();
}