#include<stdio.h>
void decNum(int n);
int odd(int n);
int main(){
    int n;
    int od;
    printf("Enter the number: ");
    scanf("%d",&n);
    decNum(n);
    od = odd(n);
    printf("%d",od);
    return 0;
}
void decNum(int n){
    for(int i =1; i<=n; i++){
        for(int j = i; j<=n; j++){
            printf("%d ",j);
        }
        printf("\n");
     }
    printf("\n\n");
}
int odd(int n){
    int counter = 0;
    for(int i = 1; i<=n; i++){
       if(n%i!=0){
         counter++;
        }
    }
    return counter;
}