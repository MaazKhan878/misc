#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int n=1000;
  srand(time(NULL));
  int number=(rand()%n)+1;
  int guess=-11;
  int numberPassed=0;
    while (guess!=number){
        printf("Enter the guess:");
        scanf("%d",&guess);
        if(guess<number){
            printf("Low\n");
        } else if(guess>number){
            printf("High\n");
        }
        numberPassed++;
    }
    printf("Congratulation you find it!!!\n");
    return 0;
}