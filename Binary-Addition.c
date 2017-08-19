//Adds two n-bit binary numbers
#include<stdio.h> 
#include<conio.h> 
void main() 
{    int a[15],b[15],c[16],n,i,carry=0;
     clrscr();
     printf("Enter no. of bits of the 2 numbers: ");
     scanf("%d",&n);
     printf("Enter first number, digit by digit preceeding by enter: ");
     for(i=0 ; i<n ; i++)
         scanf("%d",&a[i]);
     printf("Enter second number, digit by digit preceeding by enter: ");
     for(i=0 ; i<n ; i++)
         scanf("%d",&b[i]);    
     for(i=n-1 ; i>=0 ; i--)
     {    c[i+1]=(a[i]+b[i]+carry)%2;
          carry=(a[i]+b[i]+carry)/2;
     }
     if(carry)
         c[i+1]=carry;
     printf("\nSum of ");
     for(i=0 ; i<n ; i++)
         printf("%d",a[i]);
     printf(" and ");
     for(i=0 ; i<n ; i++)
         printf("%d",b[i]);
     printf(" in binary is ");
     for(i=0 ; i<=n ; i++)
         printf("%d",c[i]);
     getch(); 
}