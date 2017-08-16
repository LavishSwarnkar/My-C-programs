//Lavish Swarnkar Program#18
//Using sizeof() operator
#include<stdio.h>
#include<conio.h>
void main()
{    int x=123;
     char y='A';
     float z=123.45;
     double p=123.4567;
     long q=123456;
     clrscr();
     printf("sizeof(x) = sizeof(int) = sizeof(%d) = %d",x,sizeof(x));
     printf("\nsizeof(y) = sizeof(char) = sizeof(%c) = %d",y,sizeof(y));
     printf("\nsizeof(z) = sizeof(float) = sizeof(%f) = %d",z,sizeof(z));
     printf("\nsizeof(p) = sizeof(double) = sizeof(%lf) = %d",p,sizeof(p));
     printf("\nsizeof(p) = sizeof(long) = sizeof(%ld) = %d",q,sizeof(q));
     getch();
}