#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void array(int n , char str[n][10]){
    for(int i = 1; i<n; i++){
        printf("Name as : %s\n",str[i]);
    }
}
void storStr(int n, char str[n][10]){
    
    for(int i = 1; i<n; i++){
        while(getchar()!='\n');
        printf("Enter Roll.No %d Student Name:  ",i);
        fgets(str[i], sizeof(str[i]), stdin);
        if(str[i][strlen(str[i] - 1)] == '\n'){
            str[i][strlen(str[i] - 1)] == '\0';
        }
    }
}
int main(){
    int n;
    printf("Enter the number of student: ");
    scanf("%d",&n);
    char name[n][10];
    storStr(n + 1, name);
    array(n + 1, name);
}