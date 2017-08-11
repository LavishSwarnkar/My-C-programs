#include<stdio.h>
#include<conio.h>
#include<string.h>
char s[10][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
     char s2[10][10]={"","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
     char s3[10][10]={"","ten","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
char * get2(int x)
{    if(x==0)
         return "";
     if(x<10)
         return s[x];
     if(x%10==0)
         return s3[(x/10)];
     if(x>=11&&x<=19)
         return s2[x-10];
     printf("%s %s",s3[x/10],s[x%10]);
     return "";
}
void main()
{    long no,N;
     int dig[6],i=0,index;
     clrscr();
     printf("Enter the number to print its number name: ");
     scanf("%ld",&no);
     N=no;
     while(N)
     {    dig[i]=N%10; 
          N=N/10;       
          i++;         
     }
     index=i;
     for(;i<6;i++)
         dig[i]=0;
     printf("%ld [%ld] = ",no,index);
     for(i=0;i<index;i++)
         printf("%d ",dig[i]);
     if(index<=2)
         printf("%s",get2((dig[1]*10)+dig[0]));
     else if(index==3)
     {   printf("%s hundred ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==4||index==5)
     {   printf("%s",get2((dig[4]*10)+dig[3]));
         printf(" thousand ");
         if(dig[2]!=0)
             printf("%s hundred ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==6)
     {   printf("%s lakhs ",s[dig[5]]);
         if((dig[4]*10+dig[3])!=0)
         {   printf("%s",get2((dig[4]*10)+dig[3]));
             printf(" thousand ");
         }
         if(dig[2]!=0)
             printf("%s hundred ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     getch();
}







