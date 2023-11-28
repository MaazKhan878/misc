#include<stdio.h>
int main(){
    int spacePrint=3;
    int starPrint=1;
    for(int line = 1; line<=7; line++){
        for(int space=spacePrint; space>0; space--){
            printf(" ");
        }
        for(int stare=starPrint; stare>0; stare--){
            printf("*");
        }
        printf("\n");
        if(line<=3){
            starPrint+=2;
            spacePrint--;
        }else{
            starPrint-=2;
            spacePrint++;
        }
    }
    return 0;
}