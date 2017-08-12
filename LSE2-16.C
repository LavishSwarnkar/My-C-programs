//LSE2-16
//Program illustrating use of Shorthand operators
#include<stdio.h>
#include<conio.h>
void main()
{    int a=10,b;
     clrscr();
     b=a;
     printf("a=10\nb=10");
     b+=a;
     printf("\nb=%d after b+=a",b);
     b-=a;
     printf("\nb=%d after b-=a",b);
     b*=a;
     printf("\nb=%d after b*=a",b);
     b/=a;
     printf("\nb=%d after b/=a",b);
     b%=a;
     printf("\nb=%d after b%=a",b);
     getch();
}