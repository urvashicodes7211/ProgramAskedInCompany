/*Factorial Trailing Zeroes 
 
Given a non-negative integer n, write a program to calculate the number of trailing zeroes in n! (n 
factorial). 
The factorial of a number is defined as: 
n! = n × (n − 1) × (n − 2) × ... × 2 × 1 
Trailing zeroes are the continuous zeros at the end of the factorial result. 
The solution should run in O(n) time complexity and O(1) Space Complexity*/

#include<stdio.h>
int Factorial(int n){
    if(n == 0 || n == 1)
        return 1;
    return n *  Factorial(n-1);
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    n = Factorial(n);
    int i =0;
    while(n%10 == 0){
        n = n/10;
        i++;
    }
    printf("%d",i);
    return 0;
}