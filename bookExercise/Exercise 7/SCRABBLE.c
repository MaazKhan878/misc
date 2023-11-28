#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("Enter a word:");
    c=getchar();
    while(c!='\n'){
        if(toupper(c)=='A' ||toupper(c)=='E' ||toupper(c)=='I' ||toupper(c)=='L' ||toupper(c)=='N' ||toupper(c)=='O' ||toupper(c)=='R' ||toupper(c)=='S' ||toupper(c)=='T' ||toupper(c)=='U'){
            printf("1");
        }
        else if(toupper(c)=='D' ||toupper(c)=='G'){
            printf("2");
        }
        else if(toupper(c)=='B' ||toupper(c)=='C' ||toupper(c)=='M' ||toupper(c)=='P'){
            printf("3");
        }
        else if(toupper(c)=='F' ||toupper(c)=='H' ||toupper(c)=='V' ||toupper(c)=='W' ||toupper(c)=='Y'){
            printf("4");
        }
        else if(toupper(c)=='K'){
            printf("5");
        }
        else if(toupper(c)=='J' ||toupper(c)=='X'){
            printf("8");
        }
        else if(toupper(c)=='Q' ||toupper(c)=='Z'){
            printf("10");
        }
        c=getchar();
    }
    return 0;
}