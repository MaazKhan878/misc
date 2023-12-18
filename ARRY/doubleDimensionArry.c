#include<stdio.h>
// int main(){
//     int number[2][3] = {{1,2,3},{3,4,5}};
//     for(int i = 0; i<2; i++){
//         for(int j = 0; j<3; j++){
//             printf("%d,",number[i][j]);
//         }
//     }
// }
int main(){
    int n;
    printf("Enter the number of index in arry: ");
    scanf("%d",&n);
    int arry[n][10];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<10; j++){
            printf("Enter the number: ");
            scanf("%d",&arry[i][j]);
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<10; j++){
            printf("%d,",arry[i][j]);
        }
    }
    return 0;
}