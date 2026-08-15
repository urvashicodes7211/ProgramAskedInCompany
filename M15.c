/*Find the Repeated Number 
You are given an integer array nums containing n + 1 elements. 
Each element in the array is in the range [1, n]. 
• There is exactly one number that is repeated in the array. 
• The repeated number may appear more than once. 
• Your task is to identify and return the repeated number. 
The solution should run in O(n) time complexity.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n+1];
    for(int i=0;i<n+1;i++){
        printf("Enter num (1 to %d) : ",n);
        scanf("%d",&a[i]);
    }
    int ans[n+1];
    for (int i=0;i<n+1;i++){
        ans[i] = 0;
    }
    for (int i=0;i<n+1;i++){
        ans[a[i]]++;
    }

    for(int i=0;i<n+1;i++){
        if (ans[i] > 1){
            printf("Repeated number = %d", i);
            break;
        }
    }
    return 0;
}