/*Find Nth Factor of a Number 
 
Given a positive integer n and an integer k, write a program to find the kᵗʰ factor of n. 
• Factors of a number are the positive integers that divide the number exactly. 
• Factors are considered in ascending order. 
• If the kᵗʰ factor does not exist, return -1.*/

#include<stdio.h>
int main(){

    int n,k,i,c = 0;
    printf("Enter num : ");
    scanf("%d",&n);

    printf("Enter k : ");
    scanf("%d",&k);

    for(i=1;i<n;i++){
        if(n % i == 0){
            c++;
            if(c == k){
                printf("%d",i);
            }
        }
    }

    return 0;
}