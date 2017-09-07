//LSE2-44
//Pattern 4
/*     1
      12
     123
    1234
   12345
*/
#include<stdio.h>
#include<conio.h>
void main()
{    int i,j,n;
     clrscr();
     printf("Enter No of rows: ");
     scanf("%d",&n);
     for(i=1 ; i<=n ; i++)
     {  for(j=i ; j<=n ; j++)
		printf(" ");
	for(j=1 ; j<=i ; j++)
		printf("%d",j);
	printf("\n");
     }
     getch();
}