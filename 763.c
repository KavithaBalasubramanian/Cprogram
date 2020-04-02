'''You are given Two Numbers, A and B. If C = A + B. Find C.
Note: Round off the output to a single decimal place.
Input Description:
You are provided with two numbers A and B.
Output Description:
Find the sum of the two numbers (A + B)
Sample Input :
1
1
Sample Output :
2 '''



#include <stdio.h>
int main() 
{
    float cel,far;
    scanf("%f",&cel);
far=((cel*9)/5)+32;
printf("%.2f",far);
return 0;
}
