#include<stdio.h>
int recu(int n){
    if(n == 1 ){
        return 1;
    }
    else{
        
        return n + recu(n-1);
    }
}
int main(){
   int  result = recu(5);
    printf("%d",result);
    return 0;
}