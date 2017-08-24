//LSE2-30
//Using Switch Case (Vowels check)
#include<stdio.h>
#include<conio.h>
void main()
{    char alpha;
     clrscr();
     printf("Enter a character to check if it is vowel or not (Plz enter A-Z or a-z only): ");
     scanf("%c",&alpha);
     switch(alpha)
     {	  case 'a': 
	  case 'e': 
	  case 'i': 
	  case 'o': 
	  case 'u': 
	  case 'A': 
	  case 'E': 
	  case 'I': 
	  case 'O': 
	  case 'U': printf("It's a vowel"); break;
	  default: printf("It's a consonant");
     }
     getch();
}
