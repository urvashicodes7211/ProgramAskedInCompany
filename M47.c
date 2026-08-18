/*Given an array arr[], the task is to find the subarray that has the maximum sum and return its sum. */

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

    int sum=0;
    for(int i=0;i<n;i++){
        int temp = 0;
        for(int j=0;j<n-i;j++){
            temp = 0;
            for(int k=0;k<n-i-j;k++){
                temp = temp+a[i+k];
            }
            if(sum < temp){
                sum = temp;
            }
        }    
    }
    printf("%d",sum);
    return 0;
}