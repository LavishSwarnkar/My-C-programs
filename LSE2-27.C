//LSE2-27
//Application of Logical operators
#include<stdio.h>
#include<conio.h>
void main()
{    int age;
     clrscr();
     printf("Enter your age: ");
     scanf("%d",&age);
     if(age<=0)
	printf("\nSeriously! Are you kidding me. No one has such age.");
     else if((age>0)&&(age<=1))
	printf("\nPerson with age %d is an infant",age);
     else if((age>1)&&(age<=10))
	printf("\nPerson with age %d is a child",age);
     else if((age>10)&&(age<=17))
	printf("\nPerson with age %d is in puberty",age);
     else if((age>18)&&(age<=25))
	printf("\nPerson with age %d is an adult",age);
     else if((age>25)&&(age<=65))
	printf("\nPerson with age %d is in working class",age);
     else if((age>65)&&(age<=100))
	printf("\nPerson with age %d is old person",age);
     else if(age<=125)
	printf("\nLong live! You have outstanding age");
     else
	printf("\nYou are haunting dear!!!");
     getch();
}