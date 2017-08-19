#include<stdio.h> 
#include<conio.h> 
void main() 
{    int a[15],v,i,n;
     clrscr();
     printf("Input no. of elements (max-15): ");
     scanf("%d",&n);
     for(i=0 ; i<n ; i++)
     {    printf("\nEnter element #%d: ",i+1);
          scanf("%d",&a[i]);
     }
     printf("\n\nEnter element to be searched in this array: ");
     scanf("%d",&v);
     for(i=0 ; i<n ; i++)
     {    if(a[i]==v)
              break;
     }
     if(i<n)
         printf("\nElement %d found at index %d of the array",v,i+1);
     else
         printf("\nElement %d was not found in the array.",v);
     getch(); 
}