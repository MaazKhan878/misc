#include<stdio.h>
#include<ctype.h>
int main(){
    int count=0;
    char sentence;
    printf("Enter the sentence:");
    sentence=getchar();
    while(sentence!='\n'){
        if(toupper(sentence)=='A' || toupper(sentence)=='E' || toupper(sentence)=='I' || toupper(sentence)=='O' || toupper(sentence)=='U'){
           count++;
        }
        sentence=getchar();    
    }
    printf("Number of vowels as %d\n",count);
    return 0;

}