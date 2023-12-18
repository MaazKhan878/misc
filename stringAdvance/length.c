#include<stdio.h>
int strlen1(char *name){
    int n = 0;
    for(int i = 0; name[i]!='\0';i++){
        n++;
    }
    return n;
}
void separateStr(char *name){
    for(int i = 0; *(name + i)!='\0'; i++){
        printf("%c ",*(name + i));

    }
}
void reverseStr(char *name){
    int n = 0; 
    for(int i = 0; name[i]!='\0';i++){
        n++;
    }
    for(int i = n; i>=0;i--){
        printf("%c ",name[i]);
    }
    printf("\n");
}
void countWord(char *name){
    int n = 0;
    for(int i = 0; *(name + i)!='\0'; i++){
        if(*(name + i)==' '){
            n++;
        }
    }
    printf("the number of world as : %d\n",n + 1);
    printf("\n");
}
int main(){
    char name[50];
    printf("Enter the string:");
    fgets(name, sizeof(name), stdin);
   int len =  strlen1(name);
   printf("Length: %d",len-1);
   printf("\n");
   separateStr(name);
   reverseStr(name);
   countWord(name);
}