/* Given a string that contains both upper and lower case characters in it. The task is to count a number of 
upper- and lower-case characters in it */

#include<stdio.h>
#include<string.h>

int main(){
    char st[100];
    printf("Enter string : ");
    scanf("%s",st);
    int u = 0, l = 0;
    for(int i=0;st[i] != '\0';i++){
        if(st[i]>=65 && st[i]<=90){
            u++;
        }
        if(st[i]>=97 && st[i]<=122){
            l++;
        }
    }
    printf("vowels : %d\n",u);
    printf("consonants : %d",l);

    return 0;
}