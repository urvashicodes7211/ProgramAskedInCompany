//Find the difference between the second largest element and the second smallest element of an array. 

#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,j;

    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    int sm = INT_MAX;
    int lg = INT_MIN;


    for(i=0;i<n;i++){
        if(a[i] < sm){
            sm = a[i];
        }
        if(a[i] > lg){
            lg = a[i];
        }
    }

    int sm2 = INT_MAX;
    int lg2 = INT_MIN;
    for(i=0;i<n;i++){
        if(a[i] != sm && a[i] < sm2){
            sm2 = a[i];
        }
        if(a[i] != lg && a[i] > lg2){
            lg2 = a[i];
        }
    }
    printf("%d",lg2-sm2);
    return 0;
}