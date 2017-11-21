//LSE2-64
//Multi-dimensional Array Multiplication
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

	//Multiplying
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
		{       c[i][j]=0;
			for(k=0 ; k<i ; k++)
				c[i][j]+=a[i][k]*b[k][j];
		}
	}

	printf("\n\nPrinting multiplication of A & B, C------------------\n");
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	getch();
}



