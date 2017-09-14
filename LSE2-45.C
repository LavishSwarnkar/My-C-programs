//LSE2-45
//Pattern 5
/* 54321
    4321
     321
      21
       1
*/
#include<stdio.h>
#include<conio.h>
void main()
{    int i,j,n;
     clrscr();
     printf("Enter No of rows: ");
     scanf("%d",&n);
     for(i=n ; i>=1 ; i--)
     {  for(j=i ; j<=n ; j++)
		printf(" ");
	for(j=i ; j>=1 ; j--)
		printf("%d",j);
	printf("\n");
     }
     getch();
}