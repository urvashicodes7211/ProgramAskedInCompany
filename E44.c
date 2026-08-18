/*Given a string S and a character ‘c’, the task is to count the occurrence of the given character in the 
string. */

#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    char ch;
    printf("Enter string : ");
    gets(a);
    printf("Enter char : ");
    scanf("%c",&ch);

    int c = 0;
    for(int i=0;a[i]!='\0';i++){
        if(a[i] == ch){
            c++;
        }
    }
    printf("%d",c);
    return 0;
}