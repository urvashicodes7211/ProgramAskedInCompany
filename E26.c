/*Rearrange Array Alternately 
 
Given an array of even length, rearrange the elements such that: 
• Elements from the first half and second half are placed alternately. 
• The first element comes from the first half, the next from the second half, and so on.*/

#include<stdio.h>
int main(){

    int n,i,j,k=0;
    printf("Enter n : ");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }

    int b[n/2],c[n/2],d[n];

    for(i=0;i<n/2;i++){
        b[i]=a[i];
    }
    for(i=0;i<n/2;i++){
        c[i]=a[i +(n/2)];
    }
    int y1=0,y2=0;
    while(k<n){
        if(k%2==0){
            d[k]=b[y1];
            y1++;
        }else{
            d[k]=c[y2];
            y2++;
        }
        k++;
    }
    for(i=0;i<n;i++){
        printf("%d\n",d[i]);
    }
    return 0;
}