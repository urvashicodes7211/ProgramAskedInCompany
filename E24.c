/*Simple Calculator 
 
This program acts like a basic calculator, similar to the one on a mobile phone. 
It is designed in such a way that anyone—even a person who does not know coding—can understand 
how it works. 
The calculator: 
• Takes two numbers from the user 
• Asks the user what calculation to perform 
• Performs the calculation 
• Shows the final answer */

#include<stdio.h>
int main(){

    int a,b,result;

    char ch;
    printf("Enter char (+ , - , * , /): ");
    scanf("%c",&ch);
    
    printf("Enter a and b : ");
    scanf("%d %d",&a,&b);


    if(ch == '+'){
        result = a + b;
    }else if(ch == '-'){
        result = a - b;
    }else if(ch == '*'){
        result = a * b;
    }else{
        if(b == 0){
            printf("invalid!!");
        }else{
             result = a / b;
        }
    }
    printf("%d",result);
    return 0;
}