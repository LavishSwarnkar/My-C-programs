//LSE2-67
//Strings-getchar()
#include<stdio.h>
#include<conio.h>
void main()
{       char a[20];
	int i=0;
	clrscr();

	printf("Enter a string: ");

	while((a[i++]=getchar())!='\n') //Reading String char by char
	{
	}
	a[i]='\0';

	printf("%s",a);                 //Prints String 'a'
	getch();
}



