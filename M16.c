/*Butterfly Pattern 
 
The butterfly pattern is a symmetric star (*) pattern that looks like the shape of a butterfly. 
It is usually printed using two mirrored triangles.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=n;j<0;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}