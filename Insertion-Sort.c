#include<stdio.h> 
#include<conio.h> 
int a[15],i,j,key,n;
void insorta()
{    for(i=1 ; i<n ; i++)
     {    key=a[i];
          j=i-1;
          while(j>=0&&a[j]>key)
          {    a[j+1]=a[j];
               j--;
          }
          a[j+1]=key;
     }
}
void insortd()
{    for(i=1 ; i<n ; i++)
     {    key=a[i];
          j=i-1;
          while(j>=0&&a[j]<key)
          {    a[j+1]=a[j];
               j--;
          }
          a[j+1]=key;
     }
}
void main() 
{    clrscr();
     printf("INSERTION SORT:");
     printf("\nInput an array:\nEnter no. of elements (max-15):");
     scanf("%d",&n);
     for(i=0 ; i<n ; i++)
     {    printf("Enter element #%d, ",i+1);
          scanf("%d",&a[i]);
     }
     printf("\nArray:");
     for(i=0 ; i<n ; i++)
          printf("%d,",a[i]);
     insorta();
     printf("\nArray after Ascending Insertion sort:");
     for(i=0 ; i<n ; i++)
          printf("%d,",a[i]);
     insortd();
     printf("\nArray after Descending Insertion sort:");
     for(i=0 ; i<n ; i++)
          printf("%d,",a[i]);
     getch(); 
}