/*Given a string that contains a special character together with alphabets (‘a’ to ‘z’ and ‘A’ to ‘Z’), reverse 
the string in a way that special characters are not affected.*/

#include<stdio.h>
#include<string.h>

int main(){
    char st[100];
    printf("Enter string : ");
    scanf("%s",st);
    int j=strlen(st)-1;
    for(int i=0;i<strlen(st)/2;i++){
        while(st[i]>=33 && st[i]<=47){
            i++;
        }
        while(st[j]>=33 && st[j]<=47){
            j--;
        }
        st[i] = st[j] + st[i];
        st[j] = st[i] - st[j];
        st[i] = st[i] - st[j];
        j--;
    }
    
        printf("%s",st);
   
    return 0;
}