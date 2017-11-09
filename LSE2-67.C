//LSE2-67
//Strings-getchar()
#include<stdio.h>
#include<conio.h>
void main()
{       char a[20],ch;
	int i=0;
	clrscr();

	printf("Enter a string: ");

	while(ch!='\n')			//Reading String char by char
	{	ch=getchar();
		a[i++]=ch;
	}
	a[i]='\0';
	printf("%s",a);                 //Prints String 'a'
	getch();
}



