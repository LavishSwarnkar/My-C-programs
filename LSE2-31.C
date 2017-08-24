//LSE2-31
//Using Switch Case (Number Name (0-10))
#include<stdio.h>
#include<conio.h>
void main()
{    int no;
     clrscr();
     printf("Enter a number to know its number name (0-10 supported): ");
     scanf("%d",&no);
     switch(no)
     {    case 0: printf("It's Zero"); 	break;
	  case 1: printf("It's One"); 	break;
	  case 2: printf("It's Two"); 	break;
	  case 3: printf("It's Three"); break;
	  case 4: printf("It's Four"); 	break;
	  case 5: printf("It's Five"); 	break;
	  case 6: printf("It's Six"); 	break;
	  case 7: printf("It's Seven"); break;
	  case 8: printf("It's Eight"); break;
	  case 9: printf("It's Nine"); 	break;
	  case 10: printf("It's Ten"); 	break;
	  default: printf("It's not supported yet.");
     }
     getch();
}