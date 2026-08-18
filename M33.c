/*Maximum Sum of Contiguous Subarray of Size k 
Program Definition 
Given an array of integers arr[] and an integer k, find the maximum sum of any contiguous subarray of 
size k. 
• A contiguous subarray is a subarray with consecutive elements. 
• The program should return the largest sum possible among all subarrays of length k. */

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

    int k;
    printf("Enter k : ");
    scanf("%d",&k);
    int sum=0;
    for(int i=0;i<n-k+1;i++){
        int temp = 0;
        for(int j=0;j<k;j++){
            temp += a[i+j];
            if(temp > sum){
                sum = temp;
            }
        }   
    }
    printf("%d",sum);
    return 0;
}