//LSE2-39
//Using for loop (Prime no check)
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,flag;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Number is not prime");
        exit(0);
    }
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {   
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("The number is  not prime");
    }
    else
    {
        printf("The number is prime");
    }
    return 0;
}
