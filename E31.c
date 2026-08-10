/*Electricity Bill Calculator 
 
Write a program to calculate the electricity bill based on the number of units consumed, using the 
following slab rates: 
1. First 30 units: ₹2.70 per unit 
2. Next 70 units (31–100): ₹4.00 per unit 
3. Next 100 units (101–200): ₹5.40 per unit 
4. Above 200 units: ₹6.40 per unit 
Additional Rule: 
• If the total calculated bill is less than ₹125, set the bill to a minimum charge of ₹125. 
The program should: 
• Take the number of units consumed as input. 
• Calculate the total bill according to the slab rates. 
• Apply the minimum bill rule. 
• Print the final amount to be paid.*/

#include<stdio.h>
int main(){
    float u,bill;
    printf("Enter units : ");
    scanf("%f",&u);
    if(u <= 30){
        bill = (u*2.70);
    }else if(u <= 100){
        bill = (30*2.70) + (u-30)*4.00;
    }else if(u <200){
        bill = (30*2.70) + (70*4.00) + (u-100)*5.40;
    }else{
        bill = (30*2.70) + (70*4.00) + (100*5.40) + (u-200)*6.40;
    }

    if(bill < 125){
        bill = 125;
    }

    printf("%f",bill);
    return 0;
}