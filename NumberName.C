//Program to print Number name (Indian system) of number taken as input from the user
//Input limit :- 0>=No.<=2147483647 
//Note: Beware! No guardcodes
//Made by LAVISH SWARNKAR
#include<stdio.h>
#include<conio.h>
char s[10][10]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
     char s2[10][10]={"","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
     char s3[10][10]={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
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
{    unsigned long no,N;
     int dig[10],i=0,index;
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
     for(;i<8;i++)
         dig[i]=0;
     printf("%ld = ",no);
     if(index<=2)
         printf("%s",get2((dig[1]*10)+dig[0]));
     else if(index==3)
     {   printf("%s HUNDRED ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==4||index==5)
     {   printf("%s",get2((dig[4]*10)+dig[3]));
         printf(" THOUSAND ");
         if(dig[2]!=0)
             printf("%s HUNDRED ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==6||index==7)
     {   printf("%s LAKHS ",get2((dig[6]*10)+dig[5]));
         if((dig[4]*10+dig[3])!=0)
         {   printf("%s",get2((dig[4]*10)+dig[3]));
             printf(" THOUSAND ");
         }
         if(dig[2]!=0)
             printf("%s HUNDRED ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==8||index==9)
     {   printf("%s CRORES ",get2((dig[8]*10)+dig[7]));
         if((dig[6]*10+dig[5])!=0)
             printf("%s LAKHS ",get2((dig[6]*10)+dig[5]));
         if((dig[4]*10+dig[3])!=0)
         {   printf("%s",get2((dig[4]*10)+dig[3]));
             printf(" THOUSAND ");
         }
         if(dig[2]!=0)
             printf("%s HUNDRED ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     else if(index==10)
     {   printf("%s ARABS ",s[dig[9]]);
         if((dig[8]*10+dig[7])!=0)
             printf("%s CRORES ",get2((dig[8]*10)+dig[7]));
         if((dig[6]*10+dig[5])!=0)
             printf("%s LAKHS ",get2((dig[6]*10)+dig[5]));
         if((dig[4]*10+dig[3])!=0)
         {   printf("%s",get2((dig[4]*10)+dig[3]));
             printf(" THOUSAND ");
         }
         if(dig[2]!=0)
             printf("%s HUNDRED ",s[dig[2]]);
         printf("%s",get2((dig[1]*10)+dig[0]));
     }
     getch();
}
