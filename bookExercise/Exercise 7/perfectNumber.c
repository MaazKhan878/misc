#include<stdio.h>
int perfectNum(int);
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    perfectNum(n);
    if(perfectNum(n)){
        printf("The number as perfect\n");
    }else{
        printf("The number as not perfect\n");
    }
}
int perfectNum(int x){
    int sum=0;
    for(int i=1; i<=x/2; i++){
        if(x%i==0){
            sum+=i;
        }
    }
    if(sum==x){
        return 1;
    }
    return 0;
}
