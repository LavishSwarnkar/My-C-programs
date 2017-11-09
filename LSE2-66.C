//LSE2-66
//Strings-gets(),puts()
#include<stdio.h>
#include<conio.h>
void main()
{       char a[20];
	clrscr();

	printf("Enter a string: ");
	//scanf("%s",a);                  Reads Upto first Space
	gets(a);			//Reads Space also
	puts(a);                        //Prints String 'a'
	getch();
}



