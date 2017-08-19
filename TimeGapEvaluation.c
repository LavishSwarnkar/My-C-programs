//Works on both 12 hr as well as 24 hr clock timings
#include<stdio.h> 
#include<conio.h> 
void main() 
{    int ih,im,fh,fm,th,tm,ch;
     clrscr();
     printf("TIME-GAP CALCULATOR");
     printf("\nInput initial time (hh,mm): ");
     scanf("%d %d",&ih,&im);
     printf("Input final time (hh,mm): ");
     scanf("%d %d",&fh,&fm);
     if(fh<ih)
         fh+=12;
     
     tm=(fh*60+fm)-(ih*60+im);
     th=tm/60;
     tm-=th*60;
     
     
     //Alternate method:-
     /*
     if(fm>im)
     {    th=fh-ih;
          tm=fm-im;
     }
     else
     {    th=fh-ih-1;
          tm=60-im+fm;
     }
     */
     
     printf("The Time-gap between %d:%d and %d:%d is %d:%d",ih,im,fh,fm,th,tm);
     getch(); 
}