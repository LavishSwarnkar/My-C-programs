#include<iostream>
#include<string.h>
using namespace std;
char* getAlphabetString(int n){
    int i=0;
    char s[10];
    while(n>0){
        s[i++]=n%26;
        n/=26;
    }
    s[i]=NULL;
    return strrev(s);
}
int main(){
    cout<<getAlphabetString(703);
    return 0;
}