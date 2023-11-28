#include<stdio.h>
#include<math.h>
int sum(int a,int b);
int subtraction(int a, int b);
float division(float a,float b);
int multiplication(int a, int b);
int reminder(int a, int b);
float logritham(float a, float b);
int min(int a, int b);
int max(int a, int b);
void squreRoot(float a, float b);
int main(){
    while(1){
    int a, b;
    char choice;
    printf("Enter the two integer:\n");
    scanf("%d%d",&a,&b);
    printf("Operator:\n.Addition:+\n.Subtraction:-\n.Multiplication:*\n.Division:/\n.reminder:R\n.minimum:M\n.maximum:m\n.log:L\n.squre Root:S\n");
    scanf(" %c",&choice);
    if(choice=='+'){
        printf("sum: %d\n",sum(a,b));
    } else if(choice=='-'){
        printf("subtraction: %d",subtraction(a,b));
    } else if(choice=='*'){
        printf("Multiplication: %d\n",multiplication(a,b));
    } else if(choice=='/'){
        printf("Division: %f",division(a,b));
    } else if(choice=='L'){
        printf("Logritham: %f\n",logritham(a,b));
    } else if(choice=='R'){
        printf("Reminder: %d\n",reminder(a,b));
    } else if(choice=='M'){
        printf("Minimum: %d\n",min(a,b));
    } else if(choice=='m'){
        printf("Maximuim: %d \n",max(a,b));
    } else if(choice=='S'){
        squreRoot(a,b);
    }
    else {
        printf("Enter the wrong Operator\n Please try again\n");
    }
    char c;
    printf("You want continue press 'Y' if not press 'N'......\n");
    scanf( " %c",&c);
    if(c=='N' || c=='n'){
        break;
    }
    }
    return 0;
}

int sum(int a, int b){
    return a + b;
}
float division(float a, float b){
    return a/b;
}
int subtraction(int a, int b){
    return a-b;
}
int multiplication(int a, int b){
    return a*b;
}
int reminder(int a, int b){
    return a%b;
}
float logritham(float a, float b){
    return log(b)/log(a);
}
int min(int a, int b){
    return a<b?a:b;
}
int max(int a, int b){
    return a>b?a:b;
}
void squreRoot(float a, float b){
    sqrt(a);
    sqrt(b);
    printf("a = %f and b = %f\n",a,b);
}