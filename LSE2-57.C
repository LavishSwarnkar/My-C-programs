//LSE2-57
//Arrays - (Sum & Average)
#include<stdio.h>
#include<conio.h>
void main()
{    float n[10],sum=0,avg;
     int i,no;
     clrscr();
     printf("Enter no. of elements(Max-10): "),scanf("%d",&no);
     printf("Input the elements: ");
     for(i=0 ; i<no ; i++)
	  printf("\nEnter n[%d]: ",i),scanf("%f",&n[i]),sum+=n[i];
     avg=sum/no;
     printf("Printing the elements: ");
     for(i=0 ; i<no ; i++)
	  printf("\nn[%d]=%f ",i,n[i]);
     printf("Sum=%f Average=%f",sum,avg);
     getch();
}



