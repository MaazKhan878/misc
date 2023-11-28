// Traingle program
// Aurthor Maaz Khan
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char**argv){
    if(argc!=4){
        printf("Error.invalide input\n");
        return 0;
    }
    int sideA = atoi(argv[1]);
    int sideB = atoi(argv[2]);
    int sideC = atoi(argv[3]);
    if(sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA){
        printf("Its a Traingle.");
        if(sideA == sideB && sideB == sideC){
            printf(" Equilitral Traingle\n");
        }
        else if(sideA == sideB && sideB!=sideC || sideA==sideC && sideC!=sideB || sideB==sideC && sideC!=sideA){
            printf("Isosceles triangle\n");
        }
        else{
            printf("Scalene traingle\n");
        }
    }
    else{
        printf("Not a traingle\n");
    }
}