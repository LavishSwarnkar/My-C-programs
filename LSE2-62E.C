//LSE2-62
//Multi-dimensional Array
#include<stdio.h>
#include<conio.h>
void main()
{       int a[10][10],R,C,i,j;
	clrscr();
	printf("Configaration------------------");
	printf("\nEnter No. of Rows: "),scanf("%d",&R);
	printf("\nEnter No. of Columns: "),scanf("%d",&C);
	printf("\n\nInput------------------\n");
	for(i=0 ; i<R ; i++)
		for(j=0 ; j<C ; j++)
			printf("Enter a[%d][%d]: ",i,j),scanf("%d",&a[i][j]);
	printf("\n\nPrinting------------------\n");
	printf("Ú");
	for(j=0 ; j<(2*C)-1 ; j++) printf(" ");
	printf("¿\n");
	for(i=0 ; i<R ; i++)
	{       printf("³");

		for(j=0 ; j<C ; j++)
			printf("%d ",a[i][j]);

		printf("%c³\n",8);
	}
	printf("À");
	for(j=0 ; j<(2*C)-1 ; j++) printf(" ");
	printf("Ù");
	getch();
}



