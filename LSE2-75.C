//LSE2-64
//Multi-dimensional Array Multiplication
#include<stdio.h>
#include<conio.h>
void main()
{       int a[10][10],b[10][10],R,C,i,j;
	clrscr();

	printf("Configuration------------------");
	printf("\nEnter No. of Rows: "),scanf("%d",&R);
	printf("\nEnter No. of Columns: "),scanf("%d",&C);

	printf("\n\nInput for Matrix A------------------\n");
	for(i=0 ; i<R ; i++)
		for(j=0 ; j<C ; j++)
			printf("Enter A[%d][%d]: ",i,j),scanf("%d",&a[i][j]);

	//Transposing
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
		{       b[i][j]=a[j][i];
		}
	}

	printf("\n\nPrinting transpose of Matrix A------------------\n");
	for(i=0 ; i<R ; i++)
	{	for(j=0 ; j<C ; j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}
	getch();
}


