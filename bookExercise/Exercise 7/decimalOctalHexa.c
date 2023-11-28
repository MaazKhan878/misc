#include<stdio.h>
/*int main(){
    int n;
    printf("Enter the integer:");
    scanf("%i",&n);
    printf("%i convert to decimal %d: to Octal %#o: to Hexa Decimal %#x",n,n,n,n);
    return 0;
}
*/
/*int main (){
    int a,b,i=4;
    a=i++;
    b=++i;
    printf("a=%d and b=%d",a,b);
}*/
int main(){
    int a,b,i=10;
    a=--i;
    b=i--;
    printf("a=%d and b=%d",a,b);
}