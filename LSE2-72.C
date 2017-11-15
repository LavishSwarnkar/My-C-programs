//LSE2-72
//Strings-strcmp(),strcmpi()
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{       char a[10],b[10];
	int res;
	clrscr();

	printf("Enter a: "),gets(a);
	printf("Enter b: "),gets(b);


	res=strcmp(a,b);           //0 if strlen(a)=strlen(b),-ive if strlen(a)>strlen(b) and +ive if strlen(a)<strlen(b)
        printf("Considering Case,");
	if(res==0)
		printf("a and b are equal");
	else if(res>0)
		printf("a is greater than b");
	else
		printf("b is greater than a");
        res=strcmpi(a,b);           //0 if strlen(a)=strlen(b),-ive if strlen(a)>strlen(b) and +ive if strlen(a)<strlen(b)
        printf("Ignoring Case,");
	if(res==0)
		printf("a and b are equal");
	else if(res>0)
		printf("a is greater b");
	else
		printf("b is greater a");

	getch();
}



