/*Find Two Elements with Given Sum 
 
Given an array of numbers and a target value, find two numbers in the array whose sum equals the 
target. 
• Return the indices (positions) of these two numbers. 
• Indices start from 0. 
• Assume there is exactly one solution.*/

#include<stdio.h>
int main(){
    int n,target;

    printf("Enter n : ");
    scanf("%d",&n);

    printf("Enter target : ");
    scanf("%d",&target);

    int a[n];
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    int a1,a2;
    for(int i=0;i<n;i++){
        if(a[i] + a[i+1] == target){
            a1 = i;
            a2 = i+1;
        }
    }
    printf("%d,%d",a1,a2);
    return 0;
}