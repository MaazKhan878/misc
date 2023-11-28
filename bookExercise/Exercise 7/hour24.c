#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int hour,minute;
    char name[10];
    printf("Enter a 12 hour time:");
    scanf("%d:%d",&hour,&minute);
    printf("Enter the formate(AM or PM):");
    scanf("%s",&name);
    while(1){
        if(hour<=12 && strcmp(name,"AM")==0){
            printf("%d:%d %s",hour,minute,name);
            break;
        }
        else if(hour<=12 && strcmp(name, "PM")==0){
            hour+=12;
            printf("%d:%d %s",hour,minute,name);
            break;
        }
    }
    return 0;

    }