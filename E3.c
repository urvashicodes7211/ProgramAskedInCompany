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

    int s1;
    printf("Enter add seconds : ");
    scanf("%d",&s1);

    s = s + s1;

    int sec,min,hour;
    hour = s / 3600;
    int min1 = s % 3600;
    min = min1 / 60;
    sec = min1 % 60;
    

    int s2;
    printf("Enter Subtract seconds : ");
    scanf("%d",&s2);

    s = s - s2;

    int sec1,min2,hour1;
    hour1 = s / 3600;
    int min3 = s % 3600;
    min2 = min3 / 60;
    sec1 = min3 % 60;

    printf("%.2d:%.2d:%.2d\n",hour,min,sec);
    printf("%.2d:%.2d:%.2d",hour1,min2,sec1);
    return 0;
}