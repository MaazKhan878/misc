#include<stdio.h>
#include<string.h>
int main(){
    int hour,minute;
    char p;
    printf("Enter the time in Hour:minute formate:");
    scanf("%d:%d",&hour,&minute);
    printf("Enter the formate of PM and AM:");
    scanf(" %c",&p);
    if(hour<=12){
        printf("%d:%d ",hour,minute);
    }
    else if(hour>12 && hour<=23){
        hour-=12;
        printf("%d:%d ",hour,minute);
    }
    else if(hour==24){
        hour=12;
        printf("%d:%d ",hour,minute);
    }
    while(p!='\n'){ 
     
        if((hour<=12) && (p=='A' || p=='a' ||p =='M' || p=='m')){
        printf("%c",p);    
        }
        else if((hour>12 && hour<=23) && (p=='p' || p=='P' ||p=='M' ||p=='m')){
            printf("%c",p);  
        }
        else if((hour==24) && (p=='p'|| p=='P' ||p=='M' ||p=='m')){
            hour==12;
            printf("%c",p); 
        }
        scanf("%c",&p);
    }
    return 0;
}