/*Pivot Index 
 
Given an array of integers, write a program to find the pivot index. 
A pivot index is an index i in the array such that: 
1. The sum of all elements to the left of i is equal to the sum of all elements to the right of i. 
2. The element at the pivot index itself is not included in either sum. 
• If such an index exists, return the first pivot index found. 
• If no pivot index exists, print a message indicating that it was not found.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    int i;
    for(i=0;i<n;i++){
        int sum1 = 0, sum2 = 0;
        for(int j=0;j<i;j++){
            sum1 += a[j];
        }
        for(int j=i+1;j<n;j++){
            sum2 += a[j];
        }
        if(sum1 == sum2){
            printf("%d",i);
            break;
        }
    }
    if(i == n){
        printf("Pivot index not found");
    }
    return 0;
}