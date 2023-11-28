#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
int rollDisc();
int main(){
    char c;
    int count1=0 , count2=0; 
    do{
        if(rollDisc()){
            printf("You win!\n");
            count1++;
        }
        else{
            printf("You lose!\n");
            count2++;
        }
        printf("You want to continue the game.....\n");
        scanf("%c",&c);
        if(c=='N' || c=='n'){
            break;
        }
    }while(1);
    printf("You Win %d time\n",count1);
    printf("you Lose %d time\n",count2);
    return 0;
}
int rollDisc(){
    int n = 6;
    int number1, number2, sum;
    
    while(1){
        number1 = (rand()%n) + 1;
        number2 = (rand()%n) + 1;   
        sum = number1 + number2;
        if(sum == 7 || sum == 11){
          return 1;
        }
        else if(sum == 2 || sum == 3 || sum == 12){
            return 0;
        }
        printf("You rolled: %d \n", sum);
    }
    
}