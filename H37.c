/*Given two sorted arrays of sizes m and n respectively, the task is to find the element that would be at the 
k-th position in the final sorted array formed by merging these two arrays. */

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter m and n : ");
    scanf("%d %d",&m,&n);
   
    int a[m],b[n],c[m+n];

    for(int i=0;i<m;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        c[i] = a[i];
    }
    for(int i=0;i<n;i++){
        c[i+m] = b[i];
    }
    for(int i=0;i<m+n;i++){
        for(int j=i+1;j<m+n;j++){
            if(c[i] > c[j]){
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    int k;
    printf("Enter k : ");
    scanf("%d",&k);
    for(int i=0;i<m+n;i++){
        if(i == k){
            printf("%d",c[i-1]);
        }
    }
    return 0;
}