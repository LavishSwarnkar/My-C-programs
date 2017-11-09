//LSE2-68
//Strings-strlen()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char a[20];
	int i=0;
	clrscr();

	printf("Enter a string: ");
	gets(a);
	printf("Your String: %s",a);
	printf("\nLength of string is %d characters",strlen(a));
	getch();
}



