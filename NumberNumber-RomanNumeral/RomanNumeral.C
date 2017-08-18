#include<stdio.h> 
#include<conio.h>
char rn[20];
int i=0;
void rncc(char s,int n)
{    int j;
     for(j=0 ; j<n ; j++)
         rn[i++]=s;
}
void rncc1(char s)
{    rn[i++]=s;
}
void main() 
{    int no,n;
     clrscr();
     printf("Enter the number whose Roman equivalent is to be evaluated: ");
     scanf("%d",&no);
     if(no<=0)
     {    printf("\nInvalid Number! Press any key to exit.");
          exit(1);
     }
     n=no;
     while(no!=0)
     {    if(no>=1000)
          {    rncc('M',no/1000);
               no=no-(no/1000)*1000;
          }
          else if(no>=500)
          {    if(no>=900)
               {    rncc1('C'); 
                    rncc1('M');
                    no=no-900;
               }
               else
               {    rncc1('D');
                    rncc('C',(no-500)/100);
                    no=no-500-((no-500)/100)*100;
               }
          }
          else if(no>=100)
          {    if(no>=400)
               {    rncc1('C');
                    rncc1('D');
                    no=no-400;
               }
               else
               {    rncc('C',no/100);
                    no=no-(no/100)*100;
               }
          }
          else if(no>=50)
          {    if(no>=90)
               {    rncc1('X');
                    rncc1('C');
                    no=no-90;
               }
               else
               {    rncc1('L');
                    rncc('X',no/10);
                    no=no-50-(no/10)*10;
               }
          }
          else if(no>=10)
          {    if(no>=40)
               {    rncc1('X');
                    rncc1('L');
                    no=no-40;
               }
               else
               {    rncc('X',no/10);
                    no=no-(no/10)*10;
               }
          }
          else if(no>=5)
          {    if(no>=9)
               {    rncc1('I');
                    rncc1('X');
                    no=no-9;
               }
               else
               {    rncc1('V');
                    rncc('I',no-5);
                    no=0;
               }
          }
          else if(no>=1)
          {    if(no>=4)
               {    rncc1('I');
                    rncc1('V');
                    no=0;
               }
               else
               {    rncc('I',no);
                    no=0;
               }
          }
     }
     printf("Roman numeral for %d is %s",n,rn);
     getch();
}