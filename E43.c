/*Given an array arr[], the task is to reverse the array. Reversing an array means rearranging the elements 
such that the first element becomes the last, the second element becomes second last and so on.*/

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
   
    int a[n];

    for(i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++){
        a[i] = a[i] + a[n-i-1];
        a[n-i-1] = a[i] - a[n-i-1];
        a[i] = a[i] - a[n-i-1];
    }
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}