#include<stdio.h>
int main(){
    int spacePrint=1;
    int starePrint=20;
    for(int line = 1; line<=20; line++){
        for(int space=spacePrint; space>0; space--){
            printf(" ");
        }
        for(int stare=starePrint; stare>0; stare--){
            printf("*");
        }
        printf("\n");
        if(line<=10){
             spacePrint++;
             starePrint-=2;

        }
        else{
           
            spacePrint--;
            starePrint+=2;
        }
    
    }
}