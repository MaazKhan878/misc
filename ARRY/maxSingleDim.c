#include<stdio.h>
void array(int mt[], int n){
    for(int i = 0; i<n; i++){
       printf("%d ",mt[i]);
    }
    printf("\n");
}
void max(int mt[], int n){
    int max = 0;
    int index = 0;
    for(int i = 0; i<n; i++){
        if(mt[i]>max){
            max = mt[i];
            index = i;
        }
    }
    printf("The max as %d on slot %d.\n",max,index);
}
int main(){
    int n;
    printf("Enter the number of index or slot: ");
    scanf("%d",&n);
    int mt[n];
    for(int i = 0; i<n; i++){
        printf("Enter the number to %d slot or Index: ",i);
        scanf("%d",&mt[i]);
    }
    array(mt, n);
    max(mt, n);
}