//LSE2-12
//Program illustrating working of increment & decrement operators
#include<stdio.h>
#include<conio.h>
void main()
{    int a,b;
     clrscr();
     //Pre Increment,i.e., ++a
     a=5;
     b=++a;
     printf("Pre Increment:\na=5\nb=++a\nNow a=%d and b=%d",a,b);
     //Post Increment,i.e., a++
     a=5;
     b=a++;
     printf("\n\nPost Increment:\na=5\nb=a++\nNow a=%d and b=%d",a,b);
     //Pre Decrement,i.e., --a
     a=5;
     b=--a;
     printf("\n\nPre Decrement:\na=5\nb=--a\nNow a=%d and b=%d",a,b);
     //Post Decrement,i.e., a--
     a=5;
     b=a--;
     printf("\n\nPost Decrement:\na=5\nb=a--\nNow a=%d and b=%d",a,b);
     getch();
}