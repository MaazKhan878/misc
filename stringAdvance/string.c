#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void string(){
    char name[]={'m','a','a','z','\0'};
    printf("%s\n",name);
    char khan[]=("Khan the king");
    printf("%s\n",khan);
    char king[]="Khan the king";
    printf("%s\n",king);
}
void concat(const char name[], char name2[] , char result[]){
    int i= 0, j = 0;
    for(i = 0; name[i]!='\0'; i++){
        result[i]=name[i];
    }
    for(j = 0; name2[j]!='\0'; j++){
        result[i+j]=name2[j];
    }
    result[i + j]='\0';
}
bool strcamp(const char name1[], const char name2[]){
    int i = 0;
    bool equality;
    while(name1[i]==name2[i] && name1[i]!='\0' && name2[i]!='\0'){
        i++;
    }
    if(name1[i]=='\0' && name2[i]=='\0'){
        equality = true;
    }else{
        equality = false;
    }
    return equality;

}
int main(){
    // string();
    // char name1[6];
    // char name2[6];
    // printf("Enter the first Name: ");
    // fgets(name1,sizeof(name1),stdin);
    // printf("Enter the first Name: ");
    // fgets(name2,sizeof(name2),stdin);
    // char result[15];
    // concat(name1, name2, result);
    // printf("%s\n",result);
    // if(strcamp(name1, name2)){
    //     printf("Both string as equal");
    // }
    // else{
    //     printf("Not equal");
    // }
    
    int n;
    scanf("%d",&n);
    char name3[n][10];
    for(int i = 0; i<n; i++){
        while(getchar()!='\n');
        printf("Enter the name: ");
        fgets(name3[i],sizeof(name3[i]),stdin);
        if(name3[i][strlen(name3[i]-1)]=='\n'){
            name3[i][strlen(name3[i]-1)]='\0';
        }

    }
    for(int i = 0; i<n; i++){
        printf("the name of %d Student as %s\n",i+1,name3[i]);
    }

}