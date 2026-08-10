/*Arrange Array Elements in Ascending and Descending Order 
 
Given an array of integers, write a program to sort the array elements in: 
• Ascending order (smallest to largest) 
• Descending order (largest to smallest) 
The program should display the sorted array in both orders.*/

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++){
        for(j =0;j<n;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Ascending order");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    for(i = 0;i<n;i++){
        for(j =0;j<n;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Descending order");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}