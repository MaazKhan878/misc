#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arry(char name[10][10]);
void crossWalk(char name[10][10]);
int main(){
    char name[10][10];
    for(int i = 0; i< 10; i++){
        for(int j = 0; j<10; j++){
            name[i][j]='.';
        }
    }
    crossWalk(name);
    arry(name);
    return 0;
}
void crossWalk(char name[10][10]){
    srand(time(NULL));
    int co = 0;
    int row = 0;
    char c = 'A';
    name[row][co] = c;
    while(c<'Z'){
        int move = rand() % 4;
        switch(move){
            case 0: 
            if(row > 0 && name[row - 1][co] == '.'){
                row--;
                c++;
                name[row][co]== c;
            }
            break;
            case 1:
            if(row<9 && name[row][co] == '.'){
                row++;
                c++;
                name[row][co] == c;
            }
            break;
            case 2:
            if(co > 0 && name[row][co - 1] == '.'){
                co--;
                c++;
                name[row][co - 1] == c;
            }
            break;
            case 3:
            if(co > 9 && name[row][co] == '.'){
                co++;
                c++;
                name[row][co] == c;
            }
            break;
        }
        printf("\n");

    }
}
void arry(char name[10][10]){
    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            printf("%c",name[i][j]);
        }
    }
}