/*Write a function to count the number of set bits (1s) in the binary representation of a given unsigned 
integer. 
Solve the problem using Brian Kernighan's Algorithm.*/

#include<stdio.h>
int main(){
    int n,ans=0;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>0){
        if(n%2==1){
            ans++;
        }
        n = n/2;
    }
    printf("%d",ans);
    return 0;
}