#include<stdio.h>
int main(){
    int x,y,z;
    for(x = 1; x<=16 ; x++){
        for(y = 1; y<=23; y++){
            for(z= 1; z<=28; z++){
                if(((3*x + 2*y + z)==50) && (x + y + z == 30)){
                    printf("Gentle men %d : Women %d : Children %d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}