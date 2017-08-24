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
     {	  case 'a': printf("It's a vowel"); break;
	  case 'e': printf("It's a vowel"); break;
	  case 'i': printf("It's a vowel"); break;
	  case 'o': printf("It's a vowel"); break;
	  case 'u': printf("It's a vowel"); break;
	  case 'A': printf("It's a vowel"); break;
	  case 'E': printf("It's a vowel"); break;
	  case 'I': printf("It's a vowel"); break;
	  case 'O': printf("It's a vowel"); break;
	  case 'U': printf("It's a vowel"); break;
	  default: printf("It's a consonant");
     }
     getch();
}