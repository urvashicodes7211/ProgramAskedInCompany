/*Given the number of rows and columns, print the corresponding swastika pattern using loops. 
Note: The number of rows and columns should be the same and an odd number. This will generate a 
perfect swastika pattern.*/

#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter rows and columnms (odd number) : ");
    scanf("%d %d",&r,&c);

    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(i == 5 || j == 5){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        // for(j=1;j<=c/2;j++){
        //     if(i == 9){
        //         printf("* ");
        //     }
        // }
        printf("\n");
    }

    return 0;
}