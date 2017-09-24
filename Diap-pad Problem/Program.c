//Made by LAVISH SWARNKAR
//Solution to The Dial-Pad Problem by Lavish Swarnkar
//Dated 24-Sep-2017
#include<stdio.h> 
#include<conio.h>
#include<string.h>
char dirnm[20][10];
char dirno[20][11];
int rest[2][20],res[2][20],no=0;
char seq[]="";
void searchbynm();
void searchbyno();
void load();
void refine(int r);
void copy();
void main()
{    clrscr();
     load();
     printf("%d Contacts successfully loaded from contacts.dat",no);
     printf("\nEnter Search Sequence for searching in loaded contacts : "),scanf("%s",seq);
     searchbyno();
     printf("\n\nPress Any key to Get Search results by Name!");
     getch();
     searchbynm();
     getch();
}
void load()
{    
     char word1[12],word2[12];
     int i;
     
     FILE *contacts = fopen("contacts.dat", "r");
     clrscr();
     while(fscanf(contacts,"%s %s",word1,word2)!=EOF) 		
     {
     strcpy(dirnm[no],word1);
     strcpy(dirno[no++],word2);
     }
     fclose(contacts);
}
void searchbyno()
{    int i,j,c=0,k=0;
     char x;
     for(i=0 ; i<no ; i++)
     {    x=seq[0],c=0;
          for(j=0 ; dirno[i][j]!=NULL ; j++)
          {    if(dirno[i][j]==x)
                   x=seq[++c];
               if(c==(strlen(seq)))
               {    res[0][k++]=i;
                    break;
               }
          }
          
     }
     res[0][k]=-1;
     printf("\n\nSearch results by Number:");
     for(i=0 ; res[0][i]!=-1 ; i++)
         printf("\nFound given sequence in %s",dirno[res[0][i]]);
     if(i==0)
	       printf("\nNothing found");
}
void searchbynm()
{    int i,j,chk=-1;
     for(i=0 ; i<no ; i++)
		       res[0][i]=i,res[1][i]=-1;
     printf("\n\nSearch results by Name:");
     for(i=0 ; seq[i]!=NULL ; i++)
     {   refine(((int)seq[i])-48);
         printf("\n\nOn pass %d for %c",i,seq[i]);
         for(j=0 ; res[0][j]>-1 ; j++)
	       printf("\nIn %s sequence found at %d position",dirnm[res[0][j]],res[1][j]);
	       if(j==0)
	            printf("\nNothing found");
	    }
	    printf("\n\nFinal results are:");
	    for(j=0 ; res[0][j]>-1 ; j++)
	    {    if(res[0][j]==chk)
	             continue;
	         printf("\n%s",dirnm[res[0][j]]);
	         chk=res[0][j];
	    }
	    if(j==0)
	            printf("\nNothing found");
}
void refine(int r)
{    int i=0,j=0,c=0,ul,ll,test,p,chk=0;
     if(r==7)
         ll=80, ul=83;
     else if(r==8)
         ll=84, ul=86;
     else if(r==9)
         ll=87, ul=90;
     else
	 ll=65+((r-2)*3), ul=ll+2;
     for(p=res[0][0] ; res[0][i]!=-1 ; p=res[0][++i])
     {   for(j=res[1][i]+1 ; dirnm[p][j]!=NULL ; j++)
		{    test=dirnm[p][j];
	             if(test>=ll&&test<=ul)
	             {     rest[0][c]=p;
		                 rest[1][c++]=j;
		                 rest[0][c]=-1;
		                 chk++;
	             }
	        }
     }
     if(chk==0)
     {    res[0][0]=-1; return; }
     copy();
}
void copy()
{    int i;
     for(i=0 ; i<no ; i++)
         res[0][i]=0,res[1][i]=0;
     for(i=0 ; rest[0][i]!=-1 ; i++)
         res[0][i]=rest[0][i],res[1][i]=rest[1][i];
     res[0][i]=-1;
}
