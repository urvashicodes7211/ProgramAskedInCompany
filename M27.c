/*Happy Number 
 
A Happy Number is a positive integer that eventually reaches 1 when repeatedly replaced by the sum 
of the squares of its digits. 
• If the process reaches 1, the number is Happy. 
• If the process enters a loop that does not include 1, the number is not Happy. 
Write a program to determine whether a given number is a Happy Number. */

#include<stdio.h>
int sumsq(int n){
    int m , sum = 0;
    while(n>0){
        m = n % 10;
        sum += m*m;
        n = n / 10;
    }
    return sum;
}
int main(){
    int n , sum = 0;

    printf("Enter number : ");
    scanf("%d",&n);

    while(n != 1 && n != 4){
        n = sumsq(n);
    }

    if(n == 1){
        printf("Happy number");
    }else{
        printf("Not Happy number");
    }
    return 0;
}