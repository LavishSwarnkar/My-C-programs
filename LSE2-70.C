//LSE2-70
//Strings-strcat()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char a[20]="Lavish ",b[10]="Swarnkar";
	clrscr();

	strcat(a,b);                //Conctenates content of b to a
	printf("Your String b concatenated with b: %s",a);

	getch();
}



