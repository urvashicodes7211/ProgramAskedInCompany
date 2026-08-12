/*Given two arrays a[] and b[], the task is to find the intersection of the two arrays. Intersection of two 
arrays is said to be elements that are common in both arrays. The intersection should not count 
duplicate elements and the result should contain items in any order */

#include<stdio.h>
int main(){

    int n,m;
    printf("Enter n and m : ");
    scanf("%d %d",&n,&m);

    int a[n],b[m];

    printf("first array\n");
    for(int i=0;i<n;i++){
        printf("Enter num : ");
        scanf("%d",&a[i]);
    }

    printf("second array\n");
    for(int i=0;i<m;i++){
        printf("Enter num : ");
        scanf("%d",&b[i]);
    }

    int ans[m],k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i] == b[j]){
                int f = 0;
                for(int l=0;l<k;l++){
                    if(a[i]==ans[l]){
                        f=1;
                        break;
                    }
                }
                if(f==0){
                    ans[k]=a[i];
                    k++;
                }
            }
        }
    }
    for(int i=0;i<k;i++){
        printf("%d,",ans[i]);
    }
    return 0;
}