#include<stdio.h>
int main(){
    int n;
   printf("Enter the range: ");
   scanf("%d",&n);
    int prim[n];
    for(int i = 0; i<n; i++){
        prim[i] = 0;
    }
    int c = 0;  
    for(int i = 0; i<n; i++){
        c = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                c++;
                break;
            }
        }
        if(c == 0){
            prim[i] = i;
        }
    }
    for(int i = 1; i<n; i++){
        if(prim[i]!=0){
            printf("%d ",prim[i]);
        }
    }
}