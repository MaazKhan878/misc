#include<stdio.h>
int main(){
    char words,word2;
    printf("Enter your first and last name(space first name space second name):");
    words=getchar();
    if(words==' '){
        words=getchar();
        word2=words; 
    }
    while(words!='\n'){
    
        if(words==' '){
            while(words!='\n'){
               if((words>='A' && words<='z')){
                    printf("%c",words);
                }
                words=getchar();
              }
               printf(", %c",word2);
            }
     words=getchar();
     
    }
    
    return 0;
}