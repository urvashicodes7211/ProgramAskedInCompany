/*Check Prime Number 
 
A prime number is a natural number greater than 1 that has exactly two positive divisors: 1 and the 
number itself. 
Given an integer x, write a program to determine whether the number is prime or not. 
• Return true if x is a prime number 
• Return false otherwise 
The solution should run in O(n) time complexity and O(1) Space Complexity*/

#include<stdio.h>
int main(){
    int n,c=0;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i ==0){
            c++;
        }
    }
    if(c == 2){
        printf("true");
    }else{
        printf("flase");
    }
    return 0;
}