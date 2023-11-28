#include<stdio.h>
int greCoFact(int,int);
int main(){
    int x,y,gcd;
    printf("Enter two integer:");
    scanf("%d%d",&x,&y);
    gcd=greCoFact(x,y);
    printf("The GCD as %d\n",gcd);
    return 0;
}
int greCoFact(int a, int b){
    int temp;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            temp=i;
        }
   
}
return temp;
}