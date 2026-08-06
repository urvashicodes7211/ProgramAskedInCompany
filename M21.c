/*Next Greater Element 
 
Given an array of integers arr[], find the Next Greater Element (NGE) for each element in the array, in 
the order of their appearance. 
The Next Greater Element for an element is defined as: 
• The first element to the right of it that is greater than the current element. 
• If no such element exists, return -1 for that position.*/

#include<stdio.h>
int main(){
    int n , i , j;

    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        int flag = -1;
        for(j=i+1;j<n;j++){
            if(a[i] < a[j]){
                flag = 0;
                printf("%d -> %d\n",a[i],a[j]);
                break;
            }
        }
        if(flag == -1){
            printf("%d -> %d\n",a[i],-1);
        }
    }
    return 0;
}