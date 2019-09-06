#include<stdio.h>
void main()
{  char s[2]={'A', 'B'}, t='\n';
    int a=s, *b=&a, c=t;
    printf("%d%d", *b==s, c);
}