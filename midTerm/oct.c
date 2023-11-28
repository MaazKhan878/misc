#include<stdio.h>
int main(){
    int number;
    int reminder = 0, store = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number!=0){
        reminder = number % 8;
        store = store + reminder * i;
        number/=8;
        i*=10;
    }
    printf("%d",store);
    printf("\n");
    int reversed = 0;
    int rem = 0;
    int num;
    scanf("%d",&num);
    while(num!=0){
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num/=10;
    }
    printf("%d",reversed);
    return 0;
}
