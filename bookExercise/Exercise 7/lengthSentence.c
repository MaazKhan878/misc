#include<stdio.h>
#include<ctype.h>
int main(){
    float sum=0, count=0,counter=0,average;
    char sentence;
    printf("Enter the sentence:");
    sentence=getchar();
    while(sentence!='\n'){
        if(toupper(sentence)>='A' && toupper(sentence)<='Z' ||sentence=='.' ){
            count++;
        }
        if((sentence==' ') ||(sentence=='.') ){
            sum+=count;
            counter++;
            count=0;
        }
        sentence=getchar();
    }
    printf("%f sum count %f counter %f",sum,count,counter);
    average=sum/counter;
    printf("The size of line %f\n",average);
    return 0;

}