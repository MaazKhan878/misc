#include<stdio.h>
int main(){
    int temp = 0;
    int number;
    int produce = 0;
    int wr = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    if(number == 1){
        temp = 0;
    }
    for(int i = 2; i<=number/2; i++){
        if(number%i == 0){
            temp++;
            break;
        }
    }
    if(temp == 0){    
        while (1) {
            number++;
            for (int i = 2; i<=number/2; i++) {
                if(number % i == 0) {
                    wr = 0;
                    break; 
                }
                wr = 1;
            } 
            if(wr == 1){
                printf("%d",number);
                break;
            }

        }
        
    }
    else{
        printf("The number %d is not prime number.\n",number);
    }
    return 0;
}