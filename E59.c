/*Write a function to validate whether a password is strong. 
A password is considered strong if it satisfies all of the following conditions: 
• Minimum 8 characters long.  
• Contains at least one uppercase letter (A–Z).  
• Contains at least one digit (0–9).  
• Contains at least one special character (e.g., @, #, $, %, &, *, !).  
Return "Valid Password" if all conditions are met; otherwise, return "Invalid Password". */

#include<stdio.h>
#include<string.h>
int main(){
    char p[100];
    printf("Enter password : ");
    scanf("%s",p);
    int u = 0,l = 0,s=0;
    if(strlen(p)<8){
        printf("Invalid pass");
        return 1;
    }
    
        for(int i=0;i<strlen(p);i++){
            if(p[i]>='A' && p[i]<='Z'){
                u=1;
            }else if(p[i]>=48 && p[i]<=57){
                l=1;
            }else{
                s=1;
            }
            if(u&&l&&s){
                break;
            }
        }
    if(u&&l&&s){
        printf("Valid Password");
    }else{
        printf("Invalid Password");
    }
    return 0;
}