#include<stdio.h>
void maaz();
int sum(int,int);
int main(){
    int a, b;
    printf("Enter two Integer:");
    scanf("%d%d",&a,&b);
    printf("Hi World!!\n");
    maaz();
    printf("%d + %d = %d\n",a,b,sum(a,b));
    return 0;
}
void maaz(){
    int c=5;
    printf("I am Maaz Khan %c%c%c\n",c,c,c);
}
int sum(int a,int b){
    return a+b;
}