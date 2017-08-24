//LSE2-29
//Using Switch Case (Week day number to Week Name)
#include<stdio.h>
#include<conio.h>
void main()
{    int dayno;
     clrscr();
     printf("Enter Weekday number to know its name (Week starting with Monday): ");
     scanf("%d",&dayno);
     switch(dayno)
     {	  case 1: printf("It's Monday"); break;
	  case 2: printf("It's Teusday"); break;
	  case 3: printf("It's Wednesday"); break;
	  case 4: printf("It's Thursday"); break;
	  case 5: printf("It's Friday"); break;
	  case 6: printf("It's Saturday"); break;
	  case 7: printf("It's Sunday"); break;
	  default: printf("Wrong Input Dear! Try again...");
     }
     getch();
}