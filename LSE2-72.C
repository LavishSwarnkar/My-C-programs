//LSE2-72
//Strings-strcmp()
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

	if(res==0)
		printf("Length of a and b is equal");
	else if(res>0)
		printf("Length of a is greater than that of b");
	else
		printf("Length of b is greater than that of a");

	getch();
}



