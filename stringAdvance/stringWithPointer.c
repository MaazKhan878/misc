#include<stdio.h>
void count(char *name, int *n1, int *n2, int *n3){
    while(*name!='\0'){
        if(*name>='A' && *name<='Z' || *name>='a' && *name<='z'){
            (*n1)++;
        }
        else if(*name>='0' && *name<='9'){
            (*n2)++;
        }
        else{
            (*n3)++;
        }
        name++;

    }
}
void strToCopied(char *str1, char *str2, int *n){
    for(*n = 0; *str1!='\0'; (*n)++, str1++,str2++){
        *str2 = *str1;
   }
}
void countConVowel(char *str1, int *n1, int *n2){
    for(int i = 0; *str1!='\0';i++,str1++){
        if(*str1=='a'|| *str1=='A' ||*str1=='E' ||*str1=='I' ||*str1=='O' ||*str1=='U' ||*str1=='e' || *str1=='i' || *str1=='o' || *str1=='u'){
            (*n1)++;
        }
        else if(*str1>='A' && *str1<='Z' || *str1>='a' && *str1<='z' ){
            (*n2)++;
        }
    }
}
int main(){
    printf("Enter the string: ");
    char name[200];
    fgets(name, sizeof(name), stdin);
    int num = 0;
     int n1 = 0, n2 = 0, n3 = 0;
    // count(name,&n1,&n2,&n3);
    // printf("The number of Alphabate: %d\n The Number of Digit: %d\n The Number Of special Character: %d\n",n1,n2,n3); 
    // printf("\n");
    // char str[200]={0};
    // strToCopied(name,str,&num);
    // printf("The string 2: %s\nThe number charachter: %d\n",str,num);
    countConVowel(name,&n1,&n2);
     printf("The number of vowel: %d\nThe Number of Consonent: %d",n1,n2);
    
    
}