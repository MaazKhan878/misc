#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int num;
    printf("Enter the number of student: ");
    scanf("%d",&num);
    char name[num][50];
    while(getchar()!='\n');
    for(int i = 0; i<num; i++){
        
        printf("Enter the student name: ");
        fgets(name[i],sizeof(name[i]), stdin);
        if(name[i][strlen(name[i] - 1)]=='\n'){
            name[i][strlen(name[i] - 1)] == '\0';
        }
    }
    for(int i = 0; i<num; i++){
        for(int j = 0; j<10; j++){
            printf("%c",name[i][j]);
        }
    }
}