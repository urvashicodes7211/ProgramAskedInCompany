#include<stdio.h>
int main(){
    int n,ans = 0;
    printf("Enter n : ");
    scanf("%d",&n);
   
    int a[n];

    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }

    int sum;
    printf("Enter k: ");
    scanf("%d",&sum);
    for(int i=0;i<n;i++){
        int temp = 0;
        int coun = 0;
        for(int j=0;j<n-i;j++){
            temp = 0;
            coun = 0;
            for(int k=0;k<n-i-j;k++){
                temp = temp+a[i+k];
                coun++;
            }
            if((temp == sum) && (coun>ans)){
                ans = coun;
            }
        }    
    }
    printf("%d",ans);
    return 0;
}