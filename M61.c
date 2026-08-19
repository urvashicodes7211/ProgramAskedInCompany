/*Write a program to find the row index (0-based) that contains the maximum number of 1s in a row-wise 
sorted binary matrix. 
 
Each row of the matrix is sorted in non-decreasing order (all 0s appear before 1s). 
If two or more rows contain the same maximum number of 1s, return the smallest row index.*/

#include<stdio.h>
int main(){
    int m,n,c,temp=0,ans = 0;
    printf("Enter m and n : ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter num : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        int c = 0;
        for(int j=0;j<n;j++){
           if(a[i][j] == 1){
            c++;
           }
        }
        if(temp<c){
            temp = c;
            ans = i;
        }        
    }
    printf("%d",ans);
    return 0;
}