#include<stdio.h>
#include <stdlib.h>

int **multiTable(int r, int c){
    if(r <= 0|| c<=0){
        printf("You enter wrong input...\n");
        return NULL;
    }
    int **table =(int **)malloc(r * sizeof(int *));
    if(table == NULL){
        printf("Memory allocation failed...\n");
        return NULL;
    }
    for(int i = 0; i<r; i++){
        table[i] = (int *)malloc(c * sizeof(int));
        if(table[i] == NULL){
            printf("Memory not allocated\n");
            return NULL;
        }
    }
    for(int i = 0; i< r; i++){
        for(int j = 0; j<c; j++){
            table[i][j] = (i + 1) * (j + 1);
        }
    }
    return table;
}
int main(){
    int r = 3;
    int c = 5;
    int **table2D = multiTable(r, c);
    if(table2D!=NULL){
        for(int i = 0; i<r; i++){
            for(int j = 0; j<c; j++){
                printf("%d ",table2D[i][j]);
            }
            printf("\n");
        }
    }
    free(table2D);
}