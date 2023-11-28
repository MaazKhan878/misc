// Hour Glaas program
// Aurthor Maaz Khan
#include<stdio.h>
void hourGlass(int width){
    if(width%2==0){
        width++;
    }
    int printStar = width;
    int printSpace = 0;
    for(int line = 1; line<=width; line++){
        printf("\n");
        for(int space = 0; space<printSpace; space++){
            printf(" ");
        }
        for(int star = 1; star<=printStar; star++){
            printf("*");
        }
        if(line<=width/2){
            printSpace++;
            printStar-=2;
        }else{
            printSpace--;
            printStar+=2;
        }
    }
}
int main(){
    int width;
    printf("Enter the number:");
    scanf("%d",&width);
    hourGlass(width);
    return 0;    
}