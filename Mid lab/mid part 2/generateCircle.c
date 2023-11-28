#include<stdio.h>
#include<math.h>
void drawCircle(int radius){
    char c;
    
    printf("Your circle as Hollow press 'Y' Your circle as not hollow press 'N':\n");
    scanf(" %c",&c);

    if(c == 'Y' || c == 'y'){
         for(int x = -radius; x<=radius; x++){
            for(int y= -radius; y<=radius; y++){
            float distance = sqrt(x*x + y*y);
            if(distance>radius - 0.5 && distance<radius + 0.5){
            printf("#");
            }
            else{
             printf(".");
            }
            
        }
        printf("\n");
    }
    }
    else{
         for(int x = -radius; x<=radius; x++){
            for(int y= -radius; y<=radius; y++){
            float distance = sqrt(x*x + y*y);
            if(distance>radius - 0.5 && distance<radius + 0.5){
            printf("#");
            }
            else{
             printf("*");
            }
            
        }
        printf("\n");
    }

    }
}
int main(){
    int r;
    printf("Enter the redious:");
    scanf("%d",&r);
    drawCircle(r);
    return 0;

}
