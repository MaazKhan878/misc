// Deficient number
// Aurthor Maaz Khan
#include<stdio.h>
int main(){
    int number, sum = 0;;
    do{
    printf("Enter the passitive integer number:");
    scanf("%d",&number);
    }while(number<=0);
    for(int i = 1; i< number; i++ ){
        if(number%i==0){
            sum += i;
        }
    }
    if(sum < number){
        printf("%d number divisor sum is %d so its deficient.\n",number,sum);
    }
    else{
        printf("%d number divisor sum is %d so its perfect.\n",number, sum);
    }
    return 0;
}