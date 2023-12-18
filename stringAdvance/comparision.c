#include<stdio.h>
void compareLength(char *name1, char *name2){
    int n1 = 0, n2 = 0;
    for(int i = 0; *(name1 + i)!='\0'; i++){
        n1++;
    }
    for(int i = 0; *(name2 + i)!='\0'; i++){
        n2++;
    }
    if(n1 == n2){
        printf("String are Length equale\n");
    }
    else{
        printf("String not Length equale\n");
    }
}
int compareStr(char *name1, char *name2){
    while(*name1!='\0' && name2!='\0' && *name1 == *name2){
        name1++;
        name2++;

    }
    if((*name1 == '\0' && *name2 == '\0') && *name1 == *name2){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char name1[50];
    char name2[50];
    printf("Enter the string 1: ");
    fgets(name1,sizeof(name1),stdin);
    printf("Enter the string 2: ");
    fgets(name2, sizeof(name2), stdin);
    compareLength(name1, name2);
    if(compareStr(name1, name2)==1){
        printf("Both the string equal");
    }
    else{
        printf("Both string not equal");
    }
}