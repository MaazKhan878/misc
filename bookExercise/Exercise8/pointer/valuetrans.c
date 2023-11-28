#include<stdio.h>
void number(int *value){

    for(int i = 1; i<=6; i++){
        *value+=i;
    }
}
int main(){
    int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    number(&n);
    printf("%d",n);
    return 0;

}