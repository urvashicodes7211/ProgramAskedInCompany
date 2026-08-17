/*Largest 5-Digit Prime Containing a Specific Digit Twice 
Program Definition
Write a program to find the largest 5-digit prime number that contains a given digit exactly twice. 
Constraints: 
• The digit n is between 0 and 9. 
• Consider numbers in descending order from 99999 to 10000. 
• For each number: 
1. Check if the number is prime. 
2. Check if the number contains the digit n exactly two times. 
• Print the first number that satisfies both conditions.*/

#include<stdio.h>
int Prime(int x){
    int c = 0;
    int i;
    for(i=2;i<=x/2;i++){
        if(x%i == 0){
           break; 
        }
    }
    if(i > x/2)
        return 1;
    else
        return 0;
    
}
int main(){
    int n,ans;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i = 99999 ; i>= 10000 ;i--){
        int c = 0,temp = i;
        while(temp>0){
            if(temp%10 == n){
                c++;
            }
            temp = temp/10;
        }
        if(c==2){
            if(Prime(i)){
                ans = i;
                break;
            } 
        }
        else{
            continue;
        }
    }
    printf("%d",ans);
    return 0;
}