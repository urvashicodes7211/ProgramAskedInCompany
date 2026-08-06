/*Time Problem 
 
Create a Time class to represent time in hours, minutes, and seconds. 
• Initialize Hr : Min : Sec using a constructor. 
• Create an AddSeconds(seconds) method to add the given seconds to the initialized time. 
• Create a SubtractSeconds(seconds) method to subtract the given seconds from the initial time. 
• Ensure proper time adjustment (60 seconds = 1 minute, 60 minutes = 1 hour). 
• Print the time in Hr:Min:Sec format. */
#include<stdio.h>
int main(){
    int h , m, s;

    printf("Enter hours, minutes and seconds : ");
    scanf("%d %d %d",&h,&m,&s);

    s = (h * 3600) + (m * 60) + s;

    char ch;
    printf("Enter add (+) and sub(-) :");
    scanf("%c\n",&ch);
   
    int sec;
    printf("Enter add or sub seconds : ");
    scanf("%d\n",&sec);

    if(ch == '+'){
        s = s + sec;
    }
    if(ch == '-'){
        s = s - sec;
    }
    printf("%d",sec);
    return 0;
}