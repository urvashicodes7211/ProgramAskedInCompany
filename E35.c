/*Count Duplicate Numbers in an Array 
 
A program was written to identify and count the number of duplicate elements present in a given array 
of integers. 
An element was considered a duplicate if it appeared more than once in the array. 
Each duplicate element was counted only once, regardless of how many times it appeared.*/

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
    int num =0;
    for(i=0;i<n;i++){
        int c = 0;
        for(j=i+1;j<n;j++){
            if(a[i] == a[j]){
                c++;
            }
        }
        if(c==1){
            num++;
        }
    }
    printf("%d",num);
    return 0;
}