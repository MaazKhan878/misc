#include<stdio.h>
void starSpacePrint(int width){
    if(width%2==0){
        width++;
    }
    int spaceprint = 0;
    int starprint = width;
    for(int line = 0; line<width; line++){
        for(int space = 0 ; space<spaceprint; space++){
            printf(" ");
        }
        for(int star = 1; star<=starprint; star++){
            printf("*");
        }
        if(line<width/2){
            spaceprint++;
            starprint-=2;
        }
        else{
            spaceprint--;
            starprint+=2;
        }
        printf("\n");
    }
}
void reversedStarPrint(int width){
    if(width%2==0){
        width++;
    }
    int spaceprint = width/2;
    int starprint = 1;
    for(int line = 0; line<width; line++){
        for(int space = 1; space<=spaceprint; space++){
            printf(" ");
        }
        for(int star = 1; star<=starprint; star++ ){
            printf("*");
        }
        if(line<width/2){
            spaceprint--;
            starprint+=2;
        }
        else{
            spaceprint++;
            starprint-=2;
        }
        printf("\n");
    }
}
void unique(int width){
    if(width%2==0){
        width++;
    }
    int star1 = width/2;
    int star2 = 1;
    for(int line =1; line<=width; line++){
        for(int starf = 0; starf<=star1; starf++){
            printf("*");
        }
        printf(" ");
        for(int starl = 1; starl<=star2; starl++){
            printf("*");
        }
        printf(" ");
        for(int starf = 0; starf<=star1; starf++){
            printf("*");
        }    
        if(line<=width/2){
            star1--;
            star2+=2;
        }
        else{
            star1++;
            star2-=2;
        }
        printf("\n");
    }
}
int main(){
    int width;
    printf("Enter the width:");
    scanf("%d",&width);
    starSpacePrint(width);
    printf("\n");
    reversedStarPrint(width);
    printf("\n");
    starSpacePrint(width);
    printf("\n");
    unique(width);
    return 0;
}