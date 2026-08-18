/*Given a 2D square matrix, find the sum of elements in Principal and Secondary diagonals. For example, 
consider the following 4 X 4 input matrix.*/

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n (square matrix) : ");
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter num : ");
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0 , result = 0;
    for(i=0;i<n;i++){
        sum = sum + a[i][i];
        result = result + a[i][n-i-1];
    }
    printf("Principal Diagonal : %d\n",sum);
    printf("Secondary Diagonal : %d",result);

    return 0;
}