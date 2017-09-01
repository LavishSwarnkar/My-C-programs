//LSE2-35
//Using For Loop (20-30 printing)
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b,s;
     clrscr();
     printf("Enter initial and final number: ");
     scanf("%d %d",&a,&b);
     for(s=a ; s<=b ; s++)
     {	printf("%d\n",s);
     }
     getch();
}
