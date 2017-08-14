#include<stdio.h> 
#include<conio.h>
unsigned long amt,n;
int notes[2][6]={2000,500,100,50,20,10,0,0,0,0,0,0};
int coins[2][3]={5,2,1,0,0,0};
void main() 
{    int i;
     clrscr();
     printf("Enter amount in Rs. which is to be withdrawn:");
     scanf("%ld",&amt);
     n=amt;
     while(amt!=0)
     {    if(amt>=2000)
              notes[1][0]+=getno(2000);
          else if(amt>=500)
              notes[1][1]+=getno(500);
          else if(amt>=100)
              notes[1][2]+=getno(100);
          else if(amt>=50)
              notes[1][3]+=getno(50);
          else if(amt>=20)
              notes[1][4]+=getno(20);
          else if(amt>=10)
              notes[1][5]+=getno(10);
          else if(amt>=5)
              coins[1][0]+=getno(5);
          else if(amt>=2)
              coins[1][1]+=getno(2);
          else if(amt>=1)
              coins[1][2]+=getno(1);
     }
     printf("To sum up to the amount %ld, You must have following currency notes/(&)coins: ",n);
     for(i=0 ; i<6 ; i++)
         if(notes[1][i]!=0)
              printf("\nNo. of Rs.%d notes = %d",notes[0][i],notes[1][i]);
     for(i=0 ; i<3 ; i++)
         if(coins[1][i]!=0)
              printf("\nNo. of Rs.%d coins = %d",coins[0][i],coins[1][i]);    
     getch();
}
int getno(int x)
{    unsigned long no;
     no=amt/x;
     amt-=no*x;
     return no;
}
