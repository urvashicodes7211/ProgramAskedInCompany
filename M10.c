/*Rotate an N×M Matrix by 90 Degrees Clockwise 
 
Write a program to rotate a dynamic matrix of size N×M (not necessarily a square matrix) by 90 
degrees clockwise. 
Rotation Rules 
• The number of rows and columns may be different. 
• After rotation, the matrix size becomes M×N. 
• Elements must be repositioned correctly to represent a 90° clockwise rotation.*/

#include<stdio.h>
int main(){
    int m , n , i , j , temp;
    printf("Enter row and column : ");
    scanf("%d %d",&m,&n);

    int a[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter num : ");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=i;j<n;j++){
            temp = a[j][i];
            a[j][i] = a[i][j];
            a[i][j] = temp;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(j == 0){
                temp = a[i][j] ; 
                a[i][j] = a[i][n-1];
                a[i][n-1] = temp;
           }
           if(j == n-1){
                temp = a[i][j] ; 
                a[i][j] = a[i][n-1];
                a[i][n-1] = temp;
           }
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}