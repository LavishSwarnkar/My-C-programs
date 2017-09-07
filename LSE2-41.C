//LSE2-41
//Pattern 1
/* *
   **
   ***
   ****
   *****
*/
#include<stdio.h>
#include<conio.h>
void main()
{    int i,j,n;
     clrscr();
     printf("Enter No of rows: ");
     scanf("%d",&n);
     for(i=1 ; i<=n ; i++)
     {	for(j=1 ; j<=i ; j++)
		printf("*");
	printf("\n");
     }
     getch();
}