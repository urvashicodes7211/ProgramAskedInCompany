/*Longest Common Prefix 
Program Definition 
Given an array of strings, write a function to find the longest common prefix shared among all the 
strings. 
• A common prefix is a sequence of characters that appears at the beginning of every string in 
the array. 
• If no common prefix exists, return an empty string (""). */

#include<stdio.h>
#include<string.h>

int main(){
    int n,i,j,f =0;
    printf("Enter n : ");
    scanf("%d",&n);
    char a[n][100];
    for(i=0;i<n;i++){
        printf("Enter string : ");
        scanf("%s",a[i]);
    }
    char ans[100] = "";
    int m=0;
    for(i=0;i<a[0].length;i++){
        for(j=1;j<n;j++){
           if(a[0][i] == a[j][i] ){
                if(j == n-1){
                    f=1;
                }
           }
           if(a[0][i] != a[j][i] ){
               break;
           }
        }
        if(f==1){
            ans[m]=a[0][i];
        }else{
            break;
        }
    }
    printf("%s",ans);
    return 0;
}