#include<stdio.h>
int main(){
    float prvNu=2,prvDe=1,curNu=3,curDe=2,sum,genNu=0,genDe=0;
    sum=(prvNu/prvDe)+(curNu/curDe);
    for(int i = 3; i<=20; i++){
        genNu=curNu + prvNu;
        genDe=curDe + prvDe;
        printf("%0.1f/%0.1f\n",genNu,genDe);
        sum+=(genNu/genDe);
        prvNu=curNu;
        prvDe=curDe;
        curNu=genNu;
        curDe=genDe;
        
    }
    printf("Sum of 20th term %0.1f\n",sum);
    return 0;
}