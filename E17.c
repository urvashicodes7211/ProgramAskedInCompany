/*Check Perfect Number 
 
A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the 
number itself. 
Given an integer num, determine whether it is a perfect number. 
• Return true if num is a perfect number 
• Return false otherwise 
The solution should run in O(√n) time complexity and O(1) Space Complexity */

#include<stdio.h>
int main(){
    int n,sum=1;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=2;i*i<n;i++){
        if(n%i == 0){
            sum += i;
            if (i != n/i) {
                sum += n/i;
            }
        }
    }
    if(sum == n){
        printf("Perfect Number");
    }else{
        printf("Not Perfect Number");
    }
    return 0;
}