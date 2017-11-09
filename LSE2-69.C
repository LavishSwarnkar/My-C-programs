//LSE2-69
//Strings-strcpy()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char a[20],b[20];
	clrscr();

	printf("Enter a string: ");
	gets(a);
	strcpy(b,a);                //Copies content of a to b
	printf("Your String b copied from a: %s",b);

	getch();
}



