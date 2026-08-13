/*Find Maximum, Second Maximum, Minimum, and Second Minimum from an Array 
 
This program takes an array of integers as input and identifies: 
• the Maximum element, 
• the Second Maximum element, 
• the Minimum element, and 
• the Second Minimum element. 
The array must contain at least four distinct elements to determine all four values correctly.*/

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
    printf("Maximum num : %d\n",lg);
    printf("Minimum num : %d\n",sm);
    printf("Second Maximum num : %d\n",lg2);
    printf("Second Minimum num : %d",sm2);

    return 0;
}