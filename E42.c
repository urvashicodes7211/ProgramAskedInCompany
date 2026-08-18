// Given a number n then print n terms of fibonacci series in reverse order.

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter n : ");
    scanf("%d",&n);
    int first = 0,sec = 1 ,sum;
    int a[n];
    // printf("%d",first);
    for(i=0;i<n;i++){
        a[i] = first;
        sum = first + sec;
        first = sec;
        sec = sum;
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