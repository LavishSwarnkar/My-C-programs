//LSE2-56
//Arrays
#include<stdio.h>
#include<conio.h>
void main()
{    float n[10];
     int i,no;
     clrscr();
     printf("Enter no. of elements(Max-10): "),scanf("%d",&no);
     for(i=0 ; i<no ; i++)
	  printf("\nEnter n[%d]: ",i),scanf("%f",&n[i]);
     for(i=0 ; i<no ; i++)
	  printf("\nn[%d]=%f ",i,n[i]);
     getch();
}



