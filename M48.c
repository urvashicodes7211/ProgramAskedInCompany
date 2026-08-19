/*Write a program to merge two arrays into one, but if any element is repeated in the arrays, it should 
appear only once, and the duplicates should be replaced with zeros.*/

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter m and n : ");
    scanf("%d %d",&m,&n);
    int a[m],b[n];
    int c[m+n];
    for(int i=0;i<m;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++){
        c[i]=a[i];
    }
    for(int i=0;i<n;i++){
        c[i+m]=b[i];
    }
    for(int i=0;i<m+n;i++){
        for(int j=i+1;j<m+n;j++){
            if(c[i] == c[j]){
                c[j] = 0;
            }
        }
    }
    for(int i=0;i<m+n;i++){
        printf("%d ",c[i]);
    }
    return 0;
}