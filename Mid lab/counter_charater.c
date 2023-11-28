#include<stdio.h>
int main(){
     char c ;
     int countCons=0;
     int countVowel = 0;
     printf("Enter the sequnce of sentence:\n");
     scanf("%c",&c);

     do{
        
        if(c == 'a'|| c=='A' || c == 'e'||c == 'E' || c == 'i' || c== 'I'|| c== 'o' || c=='O' || c== 'u'||c=='U'){
             countVowel++;
        }
        else if(c>= 'A' && c<='Z' || c>='a' && c<='z'){
            countCons++;
        }
        scanf("%c",&c);
     }while(c!='\n');
     printf("Number of Vowels as %d \n",countVowel);
     printf("number of consonents as %d \n",countCons);
     return 0;

}