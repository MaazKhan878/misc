
void matrix(int number){
    for(int i =1; i<=number; i++){
        printf("\t%d",i);
    }
    for(int i = 1; i<=number;i++){
        printf("\n%i",i);
        for(int j = 1; j<=number; j++){
            printf("\t%d",i*j);
        }
    }
}
