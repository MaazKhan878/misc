#include<stdio.h>
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    for(line = 1 ; line<=n; line++){
    for(int i = space; i>=n; i--){
        printf(" ");
    }
    for(int j = star; j>=n ; j-- ){
        printf("*");
    }
    printf("\n");
    if(line<=n/2){
        star--;
        space+=2;
    }
    else{
        star++;
        space-=2;
    }
    }
    return 0;
}