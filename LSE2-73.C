//LSE2-73
//Strings-strlwr(),strupr()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{     char a[10];
      int res;
	    clrscr();

	    printf("Enter a: "),gets(a);
	    printf("\nEntered String in Lowercase: %s",strlwr(a));
	    printf("\nEntered String in Uppercase: %s",strupr(a));

      getch();
}
