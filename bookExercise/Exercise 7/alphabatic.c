#include<stdio.h>
int main(){
    char c=' ';
    printf("Enter the alphabatic number:");
    while(c!='\n'){
        c=getchar();
        switch(c){
            case 'A':
            case 'B':
            case 'C': printf("2");
            break;
            case 'D':
            case 'E':
            case 'F': printf("3");
            break;
            case 'G':
            case 'H':
            case 'I': printf("4");
            break;
            case 'K':
            case 'L':
            case 'M': printf("5");
            break;
            case 'N':
            case 'O':
            case 'P': printf("6");
            break;
            case 'Q':
            case 'R':
            case 'S': printf("7");
            break;
            case 'T':
            case 'U':
            case 'V': printf("8");
            break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z': printf("9");
            break;
            default: printf("%c",c);
        }

    }
    return 0;
}