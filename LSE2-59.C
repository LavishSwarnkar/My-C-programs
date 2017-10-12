//LSE2-59
//Using loops for array input
#include<stdio.h>
#include<conio.h>
void main()
{    float a[5];
     int i,n;
     clrscr();
     printf("Enter no. of elements: \n"),scanf("%d",&n);
     printf("Input:-\n");
     for(i=0 ; i<n ; i++)
	 printf("Enter element #%d: ",i),scanf("%f",&a[i]);
     printf("\n\nPrinting:-\n");
     for(i=0 ; i<n ; i++)
	 printf("Element #% = %f \n",i,a[i]);
     getch();
}



