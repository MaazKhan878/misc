#include<stdio.h>
int main(){
    int n;
    printf("Enter the line:");
    scanf("%d",&n);
    int spacePrint=1;
    int starPrint=1;
    for(int line =1 ; line<=n; line++){
        for(int space= spacePrint; space<=n; space++){
            printf(" ");
        }
         starPrint-=n;
        for(int star =starPrint ; star<=n; star++){
            printf("*");
        }
        
        printf("\n");
        if(line>=n/2){
            starPrint++;
            spacePrint++;
        }else{
            starPrint--;
            spacePrint--;
        }
    }
    return 0;
}