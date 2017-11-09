//LSE2-71
//Strings-Using functions
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char a[20],b[10],c[20];
	clrscr();

	printf("Enter a: "),gets(a);
	printf("Enter b: "),gets(b);


	strcpy(c,strcat(a,b));
	printf("Your String c, concatenation of a & b: %s",c);

	getch();
}



