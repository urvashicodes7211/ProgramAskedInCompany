/*Write a program to find the minimum number of moves required to make any two elements in a given 
integer array equal. 
In one move, you can increment or decrement an element by 1. 
Return the minimum number of moves required. */

#include<stdio.h>
#include<limits.h>
void main(){
    int n,ans = INT_MAX;
    printf("Enter n : ");
    scanf("%d",&n);
   
    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int temp = a[i]-a[j];
            if(temp<0){
                temp = temp*-1;
            }
            if(ans > temp){
                ans = temp;
            }
        }
    }
    printf("%d",ans);
}