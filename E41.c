/*Given the principal amount (P), rate of interest per annum (R), and loan tenure in months (N), write a 
program to calculate the EMI (Equated Monthly Installment) for a loan. */

#include<stdio.h>
#include<math.h>
int main(){
    float p , r, n ,emi;
    printf("Enter p , r , n : ");
    scanf("%f %f %f",&p,&r,&n);
    r = r / (12.0 * 100.0);
    emi = (p*r*(pow(1+r,n))/((pow(1+r,n))-1));
    printf("%f",emi);
    return 0;
}