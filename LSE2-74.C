//LSE2-74
//Strings-strrev(), Palindrom Check
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{   char a[10];
    int res;
	  clrscr();

	  printf("Enter a: "),gets(a);
	  strcpy(b,a),strrev(a);
    if(strcmpi(a,b)==0)
        printf("Entered string is a Palindrom");
    else
        printf("Entered string is NOT a Palindrom");
        
    getch();
}
