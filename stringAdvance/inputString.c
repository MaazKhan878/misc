#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void getString(char str[][11], int n){
    int i = 0;
    while(i<n){
        
        printf("Enter the name: ");
        fgets(str[i],sizeof(str[i]),stdin);
        if(str[i][strlen(str[i] - 1)]=='\n'){
            str[i][strlen(str[i] - 1)]='\0';
        }
        //while(getchar()!='\n');
         i++;
    }
    printf("The string you enter as: ");
    for(int i = 0; i<n; i++){
       printf("%s ",str[i]);
    }
   

}
void simple(int n, char str[n]){
    printf("Enter the string:");
    fgets(str,n, stdin);
    printf("The string as: %s\n",str);
}  
void simple2(char str[]){
	
    printf("\n\nAccept a string from keyboard :\n");
    printf("-----------------------------------\n"); 	
    printf("Input the string : ");
    fgets(str, 50, stdin);
    printf("The string you entered is : %s\n", str);
}
int main(){
    //int n = 2;
    //char str[n][11];
    //getString(str, n);
    //simple(name,50);
    int n = 50;
    char str[n];
	simple(n, str);
}
