/*Check for Balanced Brackets 
 
Write a program to check whether a given expression containing brackets is balanced or not. 
Allowed Brackets 
( )   { }   [ ] 
Balancing Rules 
• Every opening bracket must have a corresponding closing bracket 
• Brackets must be closed in the correct order 
• Mixed types of brackets are allowed 
The program should return whether the expression is Balanced or Not Balanced. */

#include<stdio.h>
#include <string.h>

char stack[10];
int top = -1;

void push(char ch){
    stack[++top] = ch;
}

char pop(){
    if (top == -1)
        return '\0';
    return stack[top--];
}


int main(){
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '['){
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']'){
            char temp = pop();

            if ((ch == ')' && temp != '(') ||
                (ch == '}' && temp != '{') ||
                (ch == ']' && temp != '[')){
                printf("Not Balanced");
                return 0;
            }
        }
    }
    if (top == -1){
        printf("Balanced");
    }else{
        printf("Not Balanced");
    }

    return 0;
}