//Write a program to print Pascal triangle.

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n][n];

    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j == 1 || i==1 ||j==i){
                a[i-1][j-1] = 1;
            }else{
                a[i-1][j-1] = a[i-2][j-1] + a[i-2][j-2];
            }
            printf("%d ",a[i-1][j-1]);
        }
        
        printf("\n");
    }
    return 0;
}