/*Write a program to find the maximum product of a contiguous subarray in a given integer array. 
The array may contain positive numbers, negative numbers, and zeros. The subarray must contain at 
least one element.*/

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

    int product=0;
    for(int i=0;i<n;i++){
        int temp = 1;
        for(int j=0;j<n-i;j++){
            temp = 1;
            for(int k=0;k<n-i-j;k++){
                temp = temp*a[i+k];
            }
            if(product < temp){
                product = temp;
            }
        }    
    }
    printf("%d",product);
    return 0;
}