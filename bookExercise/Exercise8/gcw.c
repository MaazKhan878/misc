#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char name[10][10];
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            name[i][j] = '.';
        }
    }
    srand(time(NULL));
    int colum = 0;
    int row = 0;
    char label = 'A';
    name[row][colum] = label;
    while(label<'Z'){
       int move = rand() % 4;
       switch(move){
        case 0:
            if(row>0 && name[row - 1][colum]=='.'){
                row--;
                label++;
                name[row][colum] = label;
            }
        
        break;
        case 1:
            if(row<9 && name[row + 1][colum]=='.'){
                row++;
                label++;
                name[row][colum] = label;
            }
        
        break;
        case 2:
            if(colum > 0 && name[row][colum - 1]=='.'){
                colum--;
                label++;
                name[row][colum] = label;
            }
        
        break;
        case 3:
            if(colum < 9 && name[row][colum + 1] =='.'){
                colum++;
                label++;
                name[row][colum] = label;
            }
        

        }

    }
    for(int i = 0; i<10; i++){
        for(int j =0; j<10; j++){
            printf("%c ",name[i][j]);
        }
        printf("\n");
    }
    return 0;
}