/*Write a program to generate very big (at least 11 digits) and calculate the total of all those numbers. 
In the program, User will input the first digit i.e. "D", input count i.e. "N" which need to generate 
automatically sequential bases from 1 to N, other remaining digits should be 0 
Input Validation 
0 ≤ D ≤ 9 
1 < N ≤ 1000 
Explanation 
Let's assume the inputs from the user for D is 5 and N is 50 
● So the generated numbers will be 50000000001, 50000000002, 50000000003, 
50000000004.... 50000000050. 
● The calculated sum of above generated numbers is 2500000001275. 
● So output of this program should be 2500000001275.
*/

#include<stdio.h>
#include<math.h>
int main(){
    int D,N;
    printf("Enter D(0 to 9) and N(1 to 1000) : ");
    scanf("%d %d",&D,&N);
    long long sum = 0;
    for(int i = 1;i<=N;i++){
        sum = sum + ((D*pow(10,11))+i);
    }
    printf("%lld",sum);
}