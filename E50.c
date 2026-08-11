//Given a string and write a C program to count the number of vowels and consonants in this string.

#include<stdio.h>
#include<string.h>

int main(){
    char st[100];
    printf("Enter string : ");
    scanf("%s",st);
    int v = 0, c = 0;
    for(int i=0;st[i] != '\0';i++){
        if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u'){
            v++;
        }else{
            c++;
        }
    }
    printf("vowels : %d",v);
    printf("consonants : %d",c);

    return 0;
}