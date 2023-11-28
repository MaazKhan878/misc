#include<stdio.h>
// int arryPrint(int n, int num[]){
//   if(n<5){
//    printf("%d ",num[n]);
//    return arryPrint(n + 1, num);
//   }
  
// }
int arryNum(int n, int num[]){
    int result = 1;
    if(n == 0){
        return 0;
    }
    result += arryNum(n - 1, num);
    printf("%d ",num[n - 1]);
    return result;
}
int main(){
    // int num[5] = {3,4,5,6,7};
    // arryPrint(0, num);
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int num1[n];
    for(int i = 0; i<n; i++){
        printf("Enter the value to different index of the arry\n");
        scanf("%d",&num1[i]);
    }
    arryNum(n, num1);
    return 0; 
}