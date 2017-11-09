//LSE2-65
//Strings-Initialisation
#include<stdio.h>
#include<conio.h>
void main()
{       char s[5]="abcd";		//Direct initialisation
	char t[5]={'a','b','c','d'};    //Individual Character initialisation
	char u[]="abcd";                //No Size defined
	char v[]="abcd";                //Inittialisation is must
	clrscr();

	scanf("%s",v);			//No Ampersand (&) required
	printf("%s",v);                 //Printing String 'v'

	getch();
}



