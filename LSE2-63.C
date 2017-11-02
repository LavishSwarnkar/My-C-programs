//LSE2-63
//Multi-dimensional Array Addition
#include<stdio.h>
#include<conio.h>
void main()
{       int a[10][10],b[10][10],c[10][10],R,C,i,j;
	clrscr();

	printf("Configuration------------------");
	printf("\nEnter No. of Rows: "),scanf("%d",&R);
	printf("\nEnter No. of Columns: "),scanf("%d",&C);

	printf("\n\nInput for Matrix A------------------\n");
	for(i=0 ; i<R ; i++)
		for(j=0 ; j<C ; j++)
			printf("Enter A[%d][%d]: ",i,j),scanf("%d",&a[i][j]);

	printf("\n\nInput for Matrix B------------------\n");
	for(i=0 ; i<R ; i++)
		for(j=0 ; j<C ; j++)
			printf("Enter B[%d][%d]: ",i,j),scanf("%d",&b[i][j]);

	//Adding
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
			c[i][j]=a[i][j]+b[i][j];
	}

	printf("\n\nPrinting addition of A & B, C------------------\n");
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	getch();
}



